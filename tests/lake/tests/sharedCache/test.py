"""Deterministically pause native cache downloads before their bytes are complete."""

import http.server
import os
import pathlib
import shutil
import subprocess
import tempfile
import threading
import time
import unittest


class Publication(unittest.TestCase):
    def paused_download(self, mode):
        body = b"a complete native artifact"
        started = threading.Event()
        release = threading.Event()

        class Handler(http.server.BaseHTTPRequestHandler):
            def do_GET(self):
                self.send_response(200)
                self.send_header("Content-Length", str(len(body)))
                self.end_headers()
                self.wfile.write(body[:4])
                self.wfile.flush()
                started.set()
                release.wait(60)
                self.wfile.write(body[4:])

            def log_message(self, *_):
                pass

        with tempfile.TemporaryDirectory() as tmp:
            target = pathlib.Path(tmp) / "artifact.art"
            server = http.server.ThreadingHTTPServer(("127.0.0.1", 0), Handler)
            thread = threading.Thread(target=server.serve_forever, daemon=True)
            thread.start()
            command = [os.environ.get("LEAN", "lean"), "--run", "Probe.lean", mode,
                       f"http://127.0.0.1:{server.server_port}/artifact",
                       str(target if mode == "fetch" else pathlib.Path(tmp)), body.decode()]
            child = subprocess.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
            try:
                for _ in range(600):
                    if started.wait(0.1):
                        break
                    if child.poll() is not None:
                        out, err = child.communicate()
                        self.fail("native downloader exited before reaching the server: " + out + err)
                self.assertTrue(started.is_set(), "native downloader never reached the local server")
                if mode == "fetch":
                    self.assertFalse(target.exists(), "native reader can see partial bytes under the final name")
                else:
                    self.assertEqual(list((pathlib.Path(tmp) / "artifacts").glob("*.art")), [])
            finally:
                release.set()
                out, err = child.communicate(timeout=60)
                server.shutdown()
                server.server_close()
                thread.join()
            self.assertEqual(child.returncode, 0, out + err)
            if mode == "batch":
                target = next((pathlib.Path(tmp) / "artifacts").glob("*.art"))
            self.assertEqual(target.read_bytes(), body)

    def test_lazy_fetch_never_exposes_partial_artifact(self):
        self.paused_download("fetch")

    def test_batch_fetch_never_exposes_partial_artifact(self):
        self.paused_download("batch")


class NativeWorkspaces(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = pathlib.Path(self.temp.name)
        self.lake = pathlib.Path(__file__).resolve().parents[2] / ".lake/build/bin/lake"
        self.env = dict(os.environ, ELAN_HOME=str(pathlib.Path.home() / ".elan"),
                        ELAN_TOOLCHAIN="leanprover/lean4:v4.36.0-rc2",
                        LAKE_SHARED_CACHE_ROOT=str(self.root / "shared"),
                        LAKE_CACHE_DIR=str(self.root / "private"),
                        LAKE_SHARED_CACHE_FALLBACK=str(self.root / "private"),
                        LAKE_ARTIFACT_CACHE="1", LAKE_RESTORE_ARTIFACTS="1")
        self.env.pop("LEAN_GITHASH", None)
        self.first = self.project("first")
        self.second = self.project("second")

    def project(self, name):
        project = self.root / name
        project.mkdir()
        (project / "lakefile.toml").write_text('name = "shared_fixture"\n[[lean_lib]]\nname = "Example"\n')
        (project / "Example.lean").write_text("module\npublic def answer : Nat := 42\n")
        return project

    def run_lake(self, project, *args, env=None):
        result = subprocess.run([str(self.lake), *args], cwd=project, env=env or self.env,
                                text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
        self.assertEqual(result.returncode, 0, result.stdout)
        return result.stdout

    def test_reuse_rebuild_and_private_rollback(self):
        selected = self.run_lake(self.first, "--shared-cache-dir").strip()
        self.assertTrue(selected.startswith(str(self.root / "shared/toolchains")))
        self.run_lake(self.first, "build", "Example")
        result = self.run_lake(self.second, "build", "Example")
        self.assertNotIn("Built Example", result)
        first = self.first / ".lake/build/lib/lean/Example.olean"
        second = self.second / ".lake/build/lib/lean/Example.olean"
        self.assertEqual(first.stat().st_ino, second.stat().st_ino)
        before = first.read_bytes()
        (self.second / "Example.lean").write_text("module\npublic def changed : Nat := 43\n")
        self.run_lake(self.second, "build", "Example")
        self.assertEqual(first.read_bytes(), before)
        self.assertNotEqual(second.read_bytes(), before)
        self.run_lake(self.second, "build", "Example", env=dict(self.env, LAKE_SHARED_CACHE_ROOT=""))
        self.assertTrue(list((self.root / "private/artifacts").glob("*.olean")))

    def test_old_child_retains_private_fallback(self):
        old = pathlib.Path.home() / ".elan/toolchains/leanprover--lean4---v4.36.0-rc2/bin/lake"
        result = self.run_lake(self.first, "env", str(old), "env", "printenv", "LAKE_CACHE_DIR")
        self.assertEqual(result.strip().splitlines()[-1], str(self.root / "private"))
        private = self.run_lake(self.first, "--shared-cache-dir", env=dict(self.env, LAKE_RESTORE_ARTIFACTS="0"))
        self.assertEqual(private.strip(), "")
        override = self.run_lake(self.first, "--shared-cache-dir", env=dict(self.env, LAKE_CACHE_DIR=str(self.root / "override")))
        self.assertEqual(override.strip(), "")
        (self.first / "lakefile.toml").unlink()
        (self.first / "lakefile.lean").write_text(
            'import Lake\nopen Lake DSL\npackage shared_fixture\nlean_lib Example\n')
        self.run_lake(self.first, "env", str(old), "build", "Example")

    def test_up_to_date_private_build_seeds_and_joins_native_store(self):
        private = dict(self.env, LAKE_SHARED_CACHE_ROOT="", LAKE_ARTIFACT_CACHE="0")
        self.run_lake(self.first, "build", "Example", env=private)
        self.run_lake(self.second, "build", "Example", env=private)
        first = self.first / ".lake/build/lib/lean/Example.olean"
        second = self.second / ".lake/build/lib/lean/Example.olean"
        self.assertNotEqual(first.stat().st_ino, second.stat().st_ino)
        self.run_lake(self.first, "build", "Example")
        self.run_lake(self.second, "build", "Example")
        self.assertEqual(first.stat().st_ino, second.stat().st_ino)

    @unittest.skipUnless(os.name == "posix" and shutil.which("cc"), "native link interposition needs cc")
    def test_eviction_after_lookup_is_a_recoverable_miss(self):
        self.run_lake(self.first, "build", "Example")
        pause = self.root / "pause"
        pause.mkdir()
        library = self.root / "pause.so"
        compile_result = subprocess.run(["cc", "-shared", "-fPIC", "-o", str(library),
                                         "pause_link.c", "-ldl"], capture_output=True, text=True)
        self.assertEqual(compile_result.returncode, 0, compile_result.stderr)
        env = dict(self.env, LD_PRELOAD=str(library), TEST_CACHE_PREFIX=str(self.root / "shared"),
                   TEST_LINK_PAUSE_DIR=str(pause))
        child = subprocess.Popen([str(self.lake), "build", "Example"], cwd=self.second,
                                 env=env, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True)
        try:
            deadline = time.monotonic() + 60
            while not (pause / "source").exists() and child.poll() is None and time.monotonic() < deadline:
                time.sleep(0.01)
            self.assertTrue((pause / "source").exists(), "restore did not enter the controlled race window")
            source = pathlib.Path((pause / "source").read_text())
            source.unlink()
        finally:
            (pause / "release").touch()
            output, _ = child.communicate(timeout=60)
        self.assertEqual(child.returncode, 0, output)
        self.assertTrue((self.second / ".lake/build/lib/lean/Example.olean").is_file())


if __name__ == "__main__":
    unittest.main()

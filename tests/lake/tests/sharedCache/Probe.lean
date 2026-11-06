import Lake.Config.Cache
import Lake.Build.Common

/-! Exercise cache publication through the native Lake implementation. -/

open System Lake

def main (args : List String) : IO UInt32 := do
  match args with
  | ["fetch", url, path, contents] =>
    let result ← (downloadArtifactCore (Hash.ofByteArray contents.toUTF8) url path).toBaseIO
    return if result.isSome then 0 else 1
  | ["save", root, source] =>
    let artifact ← (Cache.mk root).saveArtifact source "art"
    IO.println artifact.path
    return 0
  | ["batch", url, root, contents] =>
    let hash := Hash.ofByteArray contents.toUTF8
    let result ← (CacheService.downloadArtifacts #[artifactWithExt hash "art"] ⟨root⟩
      (CacheService.downloadArtsService url) (.ofString "test")).toBaseIO
    return if result.isSome then 0 else 1
  | _ => throw <| IO.userError "expected fetch URL PATH CONTENTS or save ROOT SOURCE"

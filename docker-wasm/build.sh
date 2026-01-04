#!/bin/bash
set -euxo pipefail

# Source Emscripten environment
source ${EMSDK}/emsdk_env.sh

# Create build directory
mkdir -p /lean4/build/wasm
cd /lean4/build/wasm

# Configure CMake with Emscripten settings (matching CI)
# Key settings:
# - Stage0 uses 32-bit native compiler (clang)
# - Stage1 uses Emscripten for WASM output
# - GMP disabled (not available for WASM)
# - MMAP disabled (doesn't work in browser)
# - MULTI_THREAD=OFF for single-threaded WASM (no Web Workers needed)
cmake /lean4 \
    -DCMAKE_C_COMPILER_WORKS=1 \
    -DSTAGE0_USE_GMP=OFF \
    -DSTAGE0_LEAN_EXTRA_CXX_FLAGS='-m32' \
    -DSTAGE0_LEANC_OPTS='-m32' \
    -DSTAGE0_CMAKE_CXX_COMPILER=clang++ \
    -DSTAGE0_CMAKE_C_COMPILER=clang \
    -DSTAGE0_CMAKE_EXECUTABLE_SUFFIX="" \
    -DUSE_GMP=OFF \
    -DMMAP=OFF \
    -DSTAGE0_MMAP=OFF \
    -DCMAKE_AR=${EMSDK}/upstream/emscripten/emar \
    -DCMAKE_TOOLCHAIN_FILE=${EMSDK}/upstream/emscripten/cmake/Modules/Platform/Emscripten.cmake \
    -DSTAGE0_CMAKE_LIBRARY_PATH=/usr/lib/i386-linux-gnu/

# Build stage1 (the WASM binary)
# Use multiple cores for faster builds
make stage1 -j$(nproc)

echo ""
echo "========================================="
echo "Build complete! (MULTI-THREADED with Web Workers)"
echo "WASM output is in: /lean4/build/wasm/stage1/bin/"
echo "  - lean.js       (main JavaScript)"
echo "  - lean.wasm     (WebAssembly binary)"
echo "  - lean.worker.js (Web Worker for pthreads)"
echo "========================================="


#!/bin/bash
# Convenience script to build Lean 4 WASM using Docker
set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
LEAN4_ROOT="$(dirname "$SCRIPT_DIR")"

echo "=== Lean 4 WASM Docker Build ==="
echo "Lean4 root: $LEAN4_ROOT"
echo ""

# Check if Docker is running
if ! docker info > /dev/null 2>&1; then
    echo "Error: Docker is not running. Please start Docker Desktop."
    exit 1
fi

# Build Docker image if needed
# Use linux/amd64 platform for Apple Silicon compatibility (32-bit libs required)
IMAGE_NAME="lean4-wasm-builder"
PLATFORM="linux/amd64"

if ! docker image inspect "$IMAGE_NAME" > /dev/null 2>&1; then
    echo "Building Docker image (this may take 5-10 minutes)..."
    echo "Using platform: $PLATFORM (required for 32-bit multilib support)"
    docker build --platform="$PLATFORM" -t "$IMAGE_NAME" "$SCRIPT_DIR"
else
    echo "Docker image '$IMAGE_NAME' already exists."
    echo "To rebuild: docker build --platform=$PLATFORM -t $IMAGE_NAME $SCRIPT_DIR"
fi

echo ""
echo "Starting WASM build..."
echo "This will take 30-60 minutes for a fresh build."
echo ""

# Run the build
docker run --rm \
    --platform="$PLATFORM" \
    -v "$LEAN4_ROOT:/lean4" \
    -e "TERM=xterm-256color" \
    "$IMAGE_NAME"

# Fix permissions (Docker runs as root)
if [[ "$OSTYPE" == "darwin"* ]] || [[ "$OSTYPE" == "linux-gnu"* ]]; then
    echo ""
    echo "Fixing file permissions..."
    sudo chown -R "$(whoami)" "$LEAN4_ROOT/build/wasm" 2>/dev/null || true
fi

echo ""
echo "=== Build Complete ==="
echo "WASM files are in: $LEAN4_ROOT/build/wasm/stage1/bin/"
echo ""
echo "To run incremental builds:"
echo "  $SCRIPT_DIR/run-docker-build.sh --incremental"


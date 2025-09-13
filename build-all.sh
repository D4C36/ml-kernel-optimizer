#!/bin/bash
# Navigate to build directory
mkdir -p build
cd build

# Run CMake to configure and build everything
cmake ..
cmake --build .

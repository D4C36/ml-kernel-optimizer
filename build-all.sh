#!/bin/bash

# Navigate to build directory
mkdir -p build  # create if it doesnt exist 
cd build

# Run CMake to configure and build everything
cmake ..
cmake --build .

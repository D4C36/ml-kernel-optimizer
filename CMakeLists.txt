cmake_minimum_required(VERSION 3.10)
project(MLKernelOptimizer)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Source files
set(SOURCES
    src/matmul.cpp
    # add other kernels here, e.g., src/relu.cpp
)

# Build the main library/executable
add_library(ml_kernels ${SOURCES})

# Build test executable
add_executable(test_matmul tests/test_matmul.cpp)
target_link_libraries(test_matmul ml_kernels)

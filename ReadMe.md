# Project Roadmap: ML Kernel Optimizer

**GitHub Repo Name:** `ml-kernel-optimizer`
**Goal:** Build a small, optimized ML kernel library in C/C++ to demonstrate CPU/NPU-focused ML acceleration skills.

---

## 1. Project Setup

* **Tech Stack:**

  * Programming Language: C++ (core), Python (optional for testing/prototyping)
  * Build System: CMake or Makefile
  * Version Control: Git (or Perforce if available)
* **Repository Structure:**

```
ml-kernel-optimizer/
├── include/         # Header files
├── src/             # Core kernel implementations
├── tests/           # Unit and integration tests
├── benchmarks/      # Performance tests
├── examples/        # Sample usage scripts
├── docs/            # Technical documentation
└── CMakeLists.txt   # Build configuration
```

---

## 2. Core Kernels to Implement

* Matrix multiplication (dense & sparse)
* Convolution operation
* Activation functions (ReLU, Sigmoid)
* Optional: pooling functions, normalization layers

**Milestones:**

1. Implement naive versions (baseline).
2. Optimize for memory access & cache efficiency.
3. Implement multi-threading (OpenMP or std::thread).
4. Optional: SIMD/ARM NEON/SME/SVE optimizations (simulate if real hardware unavailable).

---

## 3. API Design

* Design a clean API for easy kernel usage:

```cpp
#include "ml_kernel.h"

Tensor matmul(const Tensor& A, const Tensor& B);
Tensor relu(const Tensor& input);
```

* Include documentation on inputs, outputs, and performance considerations.

---

## 4. Testing

* Write **unit tests** for each kernel function.
* Include **regression tests** to validate results against baseline (naive implementation).
* Optional: Python wrapper for simple verification using NumPy.

---

## 5. Benchmarking & Performance Metrics

* Measure execution time for different tensor sizes.
* Compare naive vs. optimized kernel performance.
* Generate charts/graphs (optional: matplotlib or Google Benchmark).

**Metrics to track:**

* Latency
* Throughput
* Memory usage

---

## 6. Documentation

* Explain kernel designs, optimizations, and trade-offs.
* Include a **“Getting Started” guide** for running benchmarks.
* Optional: ARM architecture notes (SME/SVE) even if not directly implemented.

---

## 7. Optional Advanced Features

* Python bindings (PyBind11) to allow easy testing.
* CLI demo to run benchmark tests.
* Support for small ML models (MNIST inference) using your kernels.

---

## Timeline Suggestion (6–8 Weeks)

| Week | Goal                                                 |
| ---- | ---------------------------------------------------- |
| 1    | Project setup, implement baseline kernels            |
| 2    | Unit tests, documentation setup                      |
| 3-4  | Optimize kernels (multi-threading, cache efficiency) |
| 5    | Benchmarking & performance analysis                  |
| 6    | Optional ARM/SIMD optimization, Python binding       |
| 7-8  | Final polishing, README, and portfolio write-up      |

---

✅ **Outcome:**
A polished, documented GitHub repo that showcases:

* Low-level ML kernel optimization
* CPU/NPU performance awareness
* Strong C++ software engineering skills

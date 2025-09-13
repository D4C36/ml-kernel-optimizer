#include "matmul.h"
#include <stdexcept>

/**
 * Naive matrix multiplication (O(n^3)).
 *
 * Given two input matrices A (n x k) and B (k x m), this function computes
 * their product C = A * B, where C is (n x m).
 *
 * - A: left matrix (n rows, k columns)
 * - B: right matrix (k rows, m columns)
 * - C: output matrix (n rows, m columns) to store the result
 *
 * The computation uses three nested loops, which you can think of like a cube
 * with three dimensions:
 *   - Outer loop (i): iterates over the rows of A
 *   - Middle loop (j): iterates over the columns of B
 *   - Inner loop (l): iterates over the shared dimension (columns of A / rows of B)
 *
 * For each position (i, j) in the result matrix C, we sum over the products
 * A[i][l] * B[l][j].
 *
 * This is the most straightforward (naive) implementation, and serves as a
 * correct baseline before adding optimizations like blocking, multi-threading,
 * or SIMD.
 */
void matmul_naive(const std::vector<std::vector<float>>& A,
                  const std::vector<std::vector<float>>& B,
                  std::vector<std::vector<float>>& C) {
    int n = A.size();
    if (n == 0) throw std::invalid_argument("Matrix A is empty");
    int k = A[0].size();
    int m = B[0].size();

    if (B.size() != k)
        throw std::invalid_argument("Matrix dimensions do not match for multiplication");

    // Resize output matrix
    C.assign(n, std::vector<float>(m, 0));

    for(int i=0; i<n; ++i)
        for(int j=0; j<m; ++j)
            for(int l=0; l<k; ++l)
                C[i][j] += A[i][l] * B[l][j];
}

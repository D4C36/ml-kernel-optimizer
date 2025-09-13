#include "matmul.h"
#include <stdexcept>

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

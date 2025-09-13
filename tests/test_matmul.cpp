#include "matmul.h"
#include <iostream>

int main() {
    std::cout << "Running matmul tests"  << std::endl;
    std::vector<std::vector<float>> A = {{1, 2}, {3, 4}};
    std::vector<std::vector<float>> B = {{5, 6}, {7, 8}};
    std::vector<std::vector<float>> C;

    matmul_naive(A, B, C);

    // Print result
    for(auto& row : C) {
        for(auto val : row) std::cout << val << " ";
        std::cout << std::endl;
    }

    return 0;
}

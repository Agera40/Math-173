#include "square_matrix.h"
#include <iostream>

int main() {
    // Creating two square matrices for testing
    square_matrix mat1(3, { 1, 2, 3, 4, 5, 6, 7, 8, 9 });
    square_matrix mat2(3, { 9, 8, 7, 6, 5, 4, 3, 2, 1 });

    // Matrix contents
    mat1.print_matrix();
    mat2.print_matrix();

    // Performing matrix operations: addition, subtraction, multiplication
    square_matrix addition_result = mat1 + mat2;
    square_matrix subtraction_result = mat1 - mat2;
    square_matrix multiplication_result = mat1 * mat2;

    // Arithmethic results of operations
    mat1.print_add(mat2);
    mat1.print_sub(mat2);
    mat1.print_mul(mat2);

    return 0;
}

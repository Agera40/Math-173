#include "square_matrix.h"
#include <iostream>

// Constructor with size argument
square_matrix::square_matrix(int n) : size(n) {
    data = new double[n * n];
    for (int i = 0; i < n * n; ++i) {
        data[i] = 0.0; // If no value is entered then it will start with zeros
    }
}

// Constructor with size and initializer list
square_matrix::square_matrix(int n, const std::initializer_list<double>& list) : size(n) {
    data = new double[n * n];
    int i = 0;
    for (auto& elememnt : list) {
        data[i++] = elememnt;
    }
    // Fill remaining elements with zeros if the initializer_list is smaller than size * size
    for (; i < n * n; ++i) {
        data[i] = 0.0;
    }
}

// Copy constructor
square_matrix::square_matrix(const square_matrix& other) : size(other.size) {
    data = new double[size * size];
    for (int i = 0; i < size * size; ++i) {
        data[i] = other.data[i];
    }
}

// Destructor
square_matrix::~square_matrix() {
    delete[] data;
}

// Copy assignment operator
square_matrix& square_matrix::operator=(const square_matrix& other) {
    if (this != &other) {
        delete[] data;
        size = other.size;
        data = new double[size * size];
        for (int i = 0; i < size * size; ++i) {
            data[i] = other.data[i];
        }
    }
    return *this;
}

// Accessor for matrix elements
double& square_matrix::operator()(int i, int j) const {
    return data[i * size + j];
}

// Matrix addition
square_matrix operator+(const square_matrix& m1, const square_matrix& m2) {
    int size = m1.num_rows();
    square_matrix result(size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            result(i, j) = m1(i, j) + m2(i, j);
        }
    }
    return result;
}

// Matrix subtraction
square_matrix operator-(const square_matrix& m1, const square_matrix& m2) {
    int size = m1.num_rows();
    square_matrix result(size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            result(i, j) = m1(i, j) - m2(i, j);
        }
    }
    return result;
}

// Matrix multiplication
square_matrix operator*(const square_matrix& m1, const square_matrix& m2) {
    int size = m1.num_rows();
    square_matrix result(size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            for (int k = 0; k < size; ++k) {
                result(i, j) += m1(i, k) * m2(k, j);
            }
        }
    }
    return result;
}

// Getter for number of rows
int square_matrix::num_rows() const {
    return size;
}

// Number of columns
int square_matrix::num_cols() const {
    return size;
}

// Friend function definition to access private data member
const double* access_data(const square_matrix& matrix) {
    return matrix.data;
}

// Print matrix
void square_matrix::print_matrix() const {
    std::cout << "Given Matrix:" << std::endl;
    for (int i = 0; i < num_rows(); ++i) {
        for (int j = 0; j < num_cols(); ++j) {
            std::cout << (*this)(i, j) << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

// Pirnt addition matrix
void square_matrix::print_add(const square_matrix& other) const {
    square_matrix result = *this + other;
    std::cout << "Matrix Addition:" << std::endl;
    for (int i = 0; i < result.num_rows(); ++i) {
        for (int j = 0; j < result.num_cols(); ++j) {
            std::cout << result(i, j) << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

// Print substraction matrix
void square_matrix::print_sub(const square_matrix& other) const {
    square_matrix result = *this - other;
    std::cout << "Matrix Subtraction:" << std::endl;
    for (int i = 0; i < result.num_rows(); ++i) {
        for (int j = 0; j < result.num_cols(); ++j) {
            std::cout << result(i, j) << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

// Print multiplication matrix
void square_matrix::print_mul(const square_matrix& other) const {
    square_matrix result = *this * other;
    std::cout << "Matrix Multiplication:" << std::endl;
    for (int i = 0; i < result.num_rows(); ++i) {
        for (int j = 0; j < result.num_cols(); ++j) {
            std::cout << result(i, j) << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
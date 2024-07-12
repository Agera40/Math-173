#pragma once

#include <initializer_list>

class square_matrix {
public:
    square_matrix(int); // Default constructor
    square_matrix(int, const std::initializer_list<double>&); // Constructor with initializer list
    square_matrix(const square_matrix&); // Copy constructor
    ~square_matrix(); // Destructor
    square_matrix& operator=(const square_matrix&); // Copy assignment
    double& operator()(int i, int j) const; // Member access
    // Arithmetic operators
    square_matrix& operator+=(const square_matrix&); // Summation
    square_matrix& operator-=(const square_matrix&); // Substraction
    square_matrix& operator*=(const square_matrix&); // Multiplication
    int num_rows() const; // Number of rows
    int num_cols() const; // Number of columns

    // Friend function declaration
    friend const double* access_data(const square_matrix&);

    // Additional print
    void print_matrix() const; // Print Matrix
    void print_add(const square_matrix&) const; // Print Addition
    void print_sub(const square_matrix&) const; // Print Subtraction
    void print_mul(const square_matrix&) const; // Print Multiplication


private:
    int size; // Matrix size (number of rows/cols)
    double* data = nullptr; // Pointer to matrix data
};

square_matrix operator+(const square_matrix&, const square_matrix&);
square_matrix operator-(const square_matrix&, const square_matrix&);
square_matrix operator*(const square_matrix&, const square_matrix&);


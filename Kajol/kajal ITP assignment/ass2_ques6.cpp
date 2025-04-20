#include <iostream>
using namespace std;

const int SIZE = 3;

// Function to take input for a matrix
void inputMatrix(int mat[SIZE][SIZE], const string& name) {
    cout << "Enter elements for " << name << " matrix (3x3):\n";
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            cin >> mat[i][j];
}

// Function to print a matrix
void printMatrix(int mat[SIZE][SIZE], const string& name) {
    cout << name << ":\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

// Function to add two matrices
void addMatrices(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            result[i][j] = mat1[i][j] + mat2[i][j];
}

// Function to transpose a matrix
void transposeMatrix(int mat[SIZE][SIZE], int trans[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            trans[j][i] = mat[i][j];
}

int main() {
    int mat1[SIZE][SIZE], mat2[SIZE][SIZE];
    int sumOriginal[SIZE][SIZE], sumTransposed[SIZE][SIZE];
    int trans1[SIZE][SIZE], trans2[SIZE][SIZE];

    // Input
    inputMatrix(mat1, "first");
    inputMatrix(mat2, "second");

    // Sum of original matrices
    addMatrices(mat1, mat2, sumOriginal);
    printMatrix(sumOriginal, "Sum of original matrices");

    // Transpose of both matrices
    transposeMatrix(mat1, trans1);
    transposeMatrix(mat2, trans2);

    printMatrix(trans1, "Transpose of first matrix");
    printMatrix(trans2, "Transpose of second matrix");

    // Sum of transposed matrices
    addMatrices(trans1, trans2, sumTransposed);
    printMatrix(sumTransposed, "Sum of transposed matrices");

    return 0;
}

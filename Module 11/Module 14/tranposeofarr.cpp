#include <iostream>
using namespace std;

void printMatrix(int rows, int cols, int matrix[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void transposeMatrix(int rows, int cols, int matrix[10][10], int transpose[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int rows, cols;
    int matrix[10][10], transpose[10][10];

    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Original Matrix:" << endl;
    printMatrix(rows, cols, matrix);

    transposeMatrix(rows, cols, matrix, transpose);

    cout << "Transpose of the Matrix:" << endl;
    printMatrix(cols, rows, transpose);

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

// Function to transpose a matrix
vector<vector<int>> transposeMatrix(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<vector<int>> transposedMatrix(cols, vector<int>(rows));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }

    return transposedMatrix;
}

int main() {
    int rows, cols;

    // Prompt user to enter dimensions of matrix
    cout << "Enter number of rows for matrix: ";
    cin >> rows;
    cout << "Enter number of columns for matrix: ";
    cin >> cols;

    // Prompt user to enter elements of matrix
    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter elements of matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Calculate transpose of matrix
    vector<vector<int>> transposedMatrix = transposeMatrix(matrix);

    // Display transposed matrix
    cout << "Transposed matrix:" << endl;
    for (int i = 0; i < transposedMatrix.size(); ++i) {
        for (int j = 0; j < transposedMatrix[0].size(); ++j) {
            cout << transposedMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
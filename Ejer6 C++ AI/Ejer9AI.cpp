#include <iostream>
#include <vector>

using namespace std;

// Function to multiply two matrices
vector<vector<int>> multiplyMatrices(vector<vector<int>>& matrix1, vector<vector<int>>& matrix2) {
    int rows1 = matrix1.size();
    int cols1 = matrix1[0].size();
    int rows2 = matrix2.size();
    int cols2 = matrix2[0].size();

    // Check if matrices can be multiplied
    if (cols1 != rows2) {
        cout << "Matrices cannot be multiplied." << endl;
        exit(1);
    }

    vector<vector<int>> result(rows1, vector<int>(cols2, 0));

    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    return result;
}

int main() {
    int rows1, cols1, rows2, cols2;

    // Prompt user to enter dimensions of first matrix
    cout << "Enter number of rows for first matrix: ";
    cin >> rows1;
    cout << "Enter number of columns for first matrix: ";
    cin >> cols1;

    // Prompt user to enter elements of first matrix
    vector<vector<int>> matrix1(rows1, vector<int>(cols1));
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            cin >> matrix1[i][j];
        }
    }

    // Prompt user to enter dimensions of second matrix
    cout << "Enter number of rows for second matrix: ";
    cin >> rows2;
    cout << "Enter number of columns for second matrix: ";
    cin >> cols2;

    // Prompt user to enter elements of second matrix
    vector<vector<int>> matrix2(rows2, vector<int>(cols2));
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            cin >> matrix2[i][j];
        }
    }

    // Perform matrix multiplication
    vector<vector<int>> result = multiplyMatrices(matrix1, matrix2);

    // Display resulting matrix
    cout << "Resulting matrix:" << endl;
    for (int i = 0; i < result.size(); ++i) {
        for (int j = 0; j < result[0].size(); ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
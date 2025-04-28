#include <iostream>
using namespace std;

void inputMatrix(int** matrix, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
}
void displayMatrix(int** matrix, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void displayMatrixDefault(int** matrix, int m = 3, int n = 3) {
    displayMatrix(matrix, m, n);
}
int main() {
    int m = 2, n = 3;
    int** matrix = new int*[m];
    for (int i = 0; i < m; i++) matrix[i] = new int[n];
    inputMatrix(matrix, m, n);
    displayMatrix(matrix, m, n);
    return 0;
}

#include <iostream>
using namespace std;

int** createMatrix(int m, int n) {
    int** matrix = new int*[m];
    for (int i = 0; i < m; i++) {
        matrix[i] = new int[n];
    }
    return matrix;
}

int main() {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;
    int** matrix = createMatrix(m, n);
    return 0;
}

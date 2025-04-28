#include <iostream>
using namespace std;

void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    swapValues(x, y);
    cout << "Swapped values: " << x << " " << y << endl;
    return 0;
}

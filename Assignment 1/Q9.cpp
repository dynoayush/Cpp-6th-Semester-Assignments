#include <iostream>
#include <cmath>
using namespace std;

double power(double m, int n = 2) {
    return pow(m, n);
}

double power(int m, int n = 2) {
    return pow(m, n);
}

int main() {
    double dm;
    int im, n;
    
    cout << "Enter double value: ";
    cin >> dm;
    cout << "Enter power for double: ";
    cin >> n;
    cout << dm << " raised to " << n << " is: " << power(dm, n) << endl;
    
    cout << "\nEnter integer value: ";
    cin >> im;
    cout << "Enter power for integer: ";
    cin >> n;
    cout << im << " raised to " << n << " is: " << power(im, n) << endl;
    
    return 0;
}
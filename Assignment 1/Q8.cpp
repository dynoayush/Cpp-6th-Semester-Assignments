#include <iostream>
#include <cmath>
using namespace std;

double power(double m, int n = 2) {
    return pow(m, n);
}

int main() {
    double m;
    int n, choice;
    
    cout << "Enter base number: ";
    cin >> m;
    
    cout << "Want to specify power? (1/0): ";
    cin >> choice;
    
    if(choice) {
        cout << "Enter power: ";
        cin >> n;
        cout << m << " raised to " << n << " is: " << power(m, n) << endl;
    } else {
        cout << "Square of " << m << " is: " << power(m) << endl;
    }
    
    return 0;
}
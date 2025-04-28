#include <iostream>
#define MAX_OF_THREE(a, b, c) ((a) > (b) ? ((a) > (c) ? (a) : (c)) : ((b) > (c) ? (b) : (c)))
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    double largest = MAX_OF_THREE(a, b, c);
    cout << "Largest number is: " << largest << endl;
    
    return 0;
}
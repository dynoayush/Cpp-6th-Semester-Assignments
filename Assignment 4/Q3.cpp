#include <iostream>
using namespace std;

class FLOAT {
    float value;

public:
    FLOAT(float v = 0.0f) : value(v) {}

    FLOAT operator+(const FLOAT& f) { return FLOAT(value + f.value); }
    FLOAT operator-(const FLOAT& f) { return FLOAT(value - f.value); }
    FLOAT operator*(const FLOAT& f) { return FLOAT(value * f.value); }
    FLOAT operator/(const FLOAT& f) { return FLOAT(value / f.value); }

    float getValue() const { return value; }
};

int main() {
    float a, b;
    cout << "Enter two float numbers: ";
    cin >> a >> b;

    FLOAT f1(a), f2(b);

    cout << "\nResults:\n";
    cout << "Addition: " << (f1 + f2).getValue() << endl;
    cout << "Subtraction: " << (f1 - f2).getValue() << endl;
    cout << "Multiplication: " << (f1 * f2).getValue() << endl;
    cout << "Division: " << (f1 / f2).getValue() << endl;

    return 0;
}



#include <iostream>
using namespace std;

class Complex {
    float real;
    float imaginary;

public:
    // Constructor to initialize complex number
    Complex(float r = 0.0, float i = 0.0) {
        real = r;
        imaginary = i;
    }

    // Static function to add two complex numbers
    static Complex addComplex(Complex c1, Complex c2) {
        Complex result;
        result.real = c1.real + c2.real;
        result.imaginary = c1.imaginary + c2.imaginary;
        return result;
    }

    // Display function
    void display() {
        cout << real <<" "<< imaginary << endl;
    }
};

int main() {
    // Create two complex numbers
    Complex A(3.12, 5.65);
    Complex B(2.75, 1.21);

    // Add them using static function
    Complex C = Complex::addComplex(A, B);

    // Display the results
    cout << "A = ";
    A.display();

    cout << "B = ";
    B.display();

    cout << "C = ";
    C.display();

    return 0;
}

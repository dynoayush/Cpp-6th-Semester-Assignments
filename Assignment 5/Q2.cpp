#include <iostream>
using namespace std;

class Shape {
protected:
    double x, y;
public:
    void getData() {
        cout << "Enter two dimensions: ";
        cin >> x >> y;
    }

    virtual void display_area() {
        cout << "Area: Base class (no calculation)\n";
    }
};

class Triangle : public Shape {
public:
    void display_area() override {
        cout << "Area of Triangle: " << 0.5 * x * y << endl;
    }
};

class Rectangle : public Shape {
public:
    void display_area() override {
        cout << "Area of Rectangle: " << x * y << endl;
    }
};

// MAIN
int main() {
    Shape* shape;
    Triangle tri;
    Rectangle rect;
    int choice;

    cout << "Enter 1 for Triangle, 2 for Rectangle: ";
    cin >> choice;

    if (choice == 1) {
        shape = &tri;
    } else {
        shape = &rect;
    }

    shape->getData();
    shape->display_area();

    return 0;
}

#include <iostream>
using namespace std;

class DB; // Forward declaration

class DM {
    int meters, centimeters;

public:
    DM(int m = 0, int cm = 0) {
        meters = m;
        centimeters = cm;
    }

    void show() {
        cout << meters << " meters and " << centimeters << " centimeters" << endl;
    }

    friend DM add(DM, DB); // Friend function
};

class DB {
    int feet, inches;

public:
    DB(int f = 0, int in = 0) {
        feet = f;
        inches = in;
    }

    void show() {
        cout << feet << " feet and " << inches << " inches" << endl;
    }

    friend DM add(DM, DB); // Friend function
};

// Friend function to add DM and DB, return result in DM
DM add(DM d1, DB d2) {
    // Convert everything to centimeters
    double cm1 = d1.meters * 100 + d1.centimeters;
    double cm2 = d2.feet * 30.48 + d2.inches * 2.54;
    double totalCM = cm1 + cm2;

    int meters = totalCM / 100;
    int centimeters = (int)totalCM % 100;

    return DM(meters, centimeters);
}

int main() {
    DM d1(3, 50);   // 3 meters 50 cm
    DB d2(5, 8);    // 5 feet 8 inches

    DM result = add(d1, d2);  // Add both
    result.show();            // Show result in meters and centimeters

    return 0;
}

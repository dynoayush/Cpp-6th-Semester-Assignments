#include <iostream>
using namespace std;

enum Day { Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

void displayDay(int dayNumber) {
    Day day = static_cast<Day>(dayNumber);
    switch (day) {
        case Sunday: cout << "Sunday"; break;
        case Monday: cout << "Monday"; break;
        case Tuesday: cout << "Tuesday"; break;
        case Wednesday: cout << "Wednesday"; break;
        case Thursday: cout << "Thursday"; break;
        case Friday: cout << "Friday"; break;
        case Saturday: cout << "Saturday"; break;
        default: cout << "Invalid day number";
    }
}

int main() {
    int dayNumber;
    cout << "Enter day number (1-7): ";
    cin >> dayNumber;
    displayDay(dayNumber);
    return 0;
}

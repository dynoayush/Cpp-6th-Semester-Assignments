#include <iostream>
using namespace std;

class Staff {
protected:
    int code;
    string name;
public:
    void getData() {
        cout << "Enter code and name: ";
        cin >> code >> name;
    }

    void displayData() {
        cout << "Code: " << code << ", Name: " << name << endl;
    }
};

class Teacher : public Staff {
    string subject;
    string publication;
public:
    void getData() {
        Staff::getData();
        cout << "Enter subject and publication: ";
        cin >> subject >> publication;
    }

    void displayData() {
        Staff::displayData();
        cout << "Subject: " << subject << ", Publication: " << publication << endl;
    }
};

class Officer : public Staff {
    string grade;
public:
    void getData() {
        Staff::getData();
        cout << "Enter grade: ";
        cin >> grade;
    }

    void displayData() {
        Staff::displayData();
        cout << "Grade: " << grade << endl;
    }
};

class Typist : public Staff {
protected:
    int speed;
public:
    void getData() {
        Staff::getData();
        cout << "Enter typing speed: ";
        cin >> speed;
    }

    void displayData() {
        Staff::displayData();
        cout << "Typing Speed: " << speed << " wpm" << endl;
    }
};

class Regular : public Typist {
public:
    void getData() {
        Typist::getData();
    }

    void displayData() {
        Typist::displayData();
        cout << "Type: Regular Typist\n";
    }
};

class Casual : public Typist {
    float wages;
public:
    void getData() {
        Typist::getData();
        cout << "Enter daily wages: ";
        cin >> wages;
    }

    void displayData() {
        Typist::displayData();
        cout << "Type: Casual Typist, Wages: " << wages << endl;
    }
};

// MAIN
int main() {
    Teacher t;
    Officer o;
    Regular r;
    Casual c;

    cout << "\nEnter Teacher Details:\n";
    t.getData();
    cout << "\nEnter Officer Details:\n";
    o.getData();
    cout << "\nEnter Regular Typist Details:\n";
    r.getData();
    cout << "\nEnter Casual Typist Details:\n";
    c.getData();

    cout << "\n--- Employee Database ---\n";
    t.displayData();
    o.displayData();
    r.displayData();
    c.displayData();

    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

class String {
    char str[100];  // fixed-size character array

public:
    // (a) Default constructor: empty string
    String() {
        str[0] = '\0';
    }

    // (b) Constructor with string constant
    String(const char* s) {
        strcpy(str, s);
    }

    // (c) Concatenation function
    String join(String s2) {
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, s2.str);
        return temp;
    }

    // (d) Display function
    void show() {
        cout << str << endl;
    }

    // Copy assignment using operator=
    void operator=(String s) {
        strcpy(str, s.str);
    }
};

int main() {
    // (a) Empty string
    String s1;
    cout << "s1: ";
    s1.show();

    // (b) Initialized with constant
    String s2("Well done!");
    cout << "s2: ";
    s2.show();

    // (c) Concatenation
    String s3 = s1.join(s2);
    cout << "s3 (s1 + s2): ";
    s3.show();

    // (d) Copy one string to another
    s1 = s2;
    cout << "s1 after copying s2: ";
    s1.show();

    return 0;
}

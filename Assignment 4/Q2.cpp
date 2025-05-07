#include <iostream>
using namespace std;

class Counter {
    int count;

public:
    Counter(int c = 0) : count(c) {}

    Counter operator++() { 
        ++count;
        return *this;
    }

    Counter operator++(int) { 
        Counter temp = *this;
        count++;
        return temp;
    }

    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    int userInput;
    cout << "Enter the initial count value: ";
    cin >> userInput;

    Counter c(userInput);
    
    ++c;
    cout << "After prefix increment: ";
    c.display();

    c++;
    cout << "After postfix increment: ";
    c.display();

    return 0;
}
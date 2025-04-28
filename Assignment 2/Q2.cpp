#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to initialize values
    void initialize(string name, int accNo, string type, double bal) {
        depositorName = name;
        accountNumber = accNo;
        accountType = type;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient balance!" << endl;
        else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    void display() {
        cout << "Name: " << depositorName << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount accounts[10];

    // Initializing 10 accounts
    for (int i = 0; i < 10; i++) {
        accounts[i].initialize("Customer" + to_string(i + 1), 1000 + i, "Savings", 1000.0 * (i + 1));
    }

    // Performing transactions for demonstration
    accounts[0].deposit(500);
    accounts[0].withdraw(300);
    accounts[0].display();

    return 0;
}
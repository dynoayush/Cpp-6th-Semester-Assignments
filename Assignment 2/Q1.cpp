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
    // Function to assign initial values
    void setDetails(string name, int accNo, string type, double bal) {
        depositorName = name;
        accountNumber = accNo;
        accountType = type;
        balance = bal;
    }

    // Function to deposit an amount
    void deposit(double amount) {
        balance += amount;
        cout << "Amount Deposited: " << amount << endl;
    }

    // Function to withdraw an amount
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Amount Withdrawn: " << amount << endl;
        }
    }

    // Function to display name and balance
    void display() {
        cout << "Name: " << depositorName << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc1;

    // Assign initial values
    acc1.setDetails("John Doe", 123456, "Savings", 500.0);

    // Performing transactions
    acc1.deposit(2000);
    acc1.withdraw(3000);
    acc1.display();

    return 0;
}

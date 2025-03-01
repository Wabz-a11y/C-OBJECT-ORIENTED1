//C++ 
/*
C++ Program for Bank Management System
Author: Ian Wabwire
Reg No:BSCIT-05-0069/2024
Date:01/03/2025
*/


#include <iostream>
#include <string>
using namespace std;

//Base class
class AccountHolder {
protected:
    string name; // Protected data member, for account holder's name

public:
    // Function to set the name
    void setName(string n) {
        name = n;
    }

    // Function to get the name
    string getName() {
        return name;
    }
};

// A derived class
class BankAccount : public AccountHolder {
private:
    int accountNumber; // Private data member for account number
    double balance;    // Private data member for balance

public:
    // Constructor to initialize name, accountNumber, and balance
    BankAccount(string n, int accNum, double bal) {
        name = n;
        accountNumber = accNum;
        balance = bal;
    }

    // Function to get the account number
    int getAccountNumber() {
        return accountNumber;
    }

    // Function to get the account balance
    double getBalance() {
        return balance;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate; // Private data member for interest rate

public:
    // Constructor to initialize name, accountNumber, balance, and interestRate
    SavingsAccount(string n, int accNum, double bal, double rate) 
        : BankAccount(n, accNum, bal), interestRate(rate) {}

    // Function to get the interest rate
    double getInterestRate() {
        return interestRate;
    }
};


int main() {
    SavingsAccount savings("John Doe", 654321, 1550.50, 4.2);
    cout << "Account Holder: " << savings.getName() << endl;
    cout << "Account Number: " << savings.getAccountNumber() << endl;
    cout << "Balance: $" << savings.getBalance() << endl;
    cout << "Interest Rate: " << savings.getInterestRate() << "%" << endl;
    return 0;
}

//C++ 
/*
C++ Program compute bonuses, for Company giving bonus and loans to employees
Author: Ian Wabwire
Reg No:BSCIT-05-0069/2024
Date:17/03/2025
*/

#include <iostream>

using namespace std;

// Function prototypes
int calculateBonus(int salary, int yearsOfService);
void checkLoanEligibility(int age, int income);

int main() {
    // Part (a) - Employee Bonus Calculation
    int salary, yearsOfService;
    cout << "Enter your salary and years of service: ";
    cin >> salary >> yearsOfService;

    int bonus = calculateBonus(salary, yearsOfService);
    cout << "Your net bonus amount is: " << bonus << endl;

    // Part (b) - Loan Eligibility Check
    int age, income;
    cout << "\nEnter your age and annual income: ";
    cin >> age >> income;

    checkLoanEligibility(age, income);

    return 0;
}

// Function to compute employee bonus
int calculateBonus(int salary, int yearsOfService) {
    if (yearsOfService > 10) {
        return static_cast<int>(0.12 * salary);
    } 
    else if (yearsOfService >= 6 && yearsOfService <= 10) {
        return static_cast<int>(0.10 * salary);
    } 
    else {
        return static_cast<int>(0.08 * salary);
    }
}

// Function to check loan eligibility
void checkLoanEligibility(int age, int income) {
    if (age >= 21 && income >= 21000) {
        cout << "Congratulations! You qualify for a loan." << endl;
    } 
    else {
        cout << "Unfortunately, we are unable to offer you a loan at this time." << endl;
    }
}


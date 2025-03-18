//C++ 
/*
C++ Program to calculate the fine for overdue library books
Author: Ian Wabwire
Reg No:BSCIT-05-0069/2024
Date:18/03/2025
*/



#include <iostream>

using namespace std;

int main() {
    int bookID, dueDate, returnDate, daysOverdue, fineRate, fineAmount;

    // Taking input from the user
    cout << "Enter Book ID: ";
    cin >> bookID;
    cout << "Enter Due Date (as a day number): ";
    cin >> dueDate;
    cout << "Enter Return Date (as a day number): ";
    cin >> returnDate;

    // Calculating overdue days
    daysOverdue = returnDate - dueDate;

    // Determining the fine rate
    if (daysOverdue <= 0) {
        fineRate = 0; // No fine if the book is returned on or before the due date
    } else if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
    } else {
        fineRate = 100;
    }

    // Calculating fine amount
    fineAmount = daysOverdue > 0 ? daysOverdue * fineRate : 0;

    // Displaying output
    cout << "\nBook ID: " << bookID << endl;
    cout << "Due Date: " << dueDate << endl;
    cout << "Return Date: " << returnDate << endl;
    cout << "Days Overdue: " << (daysOverdue > 0 ? daysOverdue : 0) << endl;
    cout << "Fine Rate: Ksh. " << fineRate << endl;
    cout << "Fine Amount: Ksh. " << fineAmount << endl;

    return 0;
}

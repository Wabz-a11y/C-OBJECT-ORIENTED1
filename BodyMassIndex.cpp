//C++ 
/*
C++ Program to calculate the Body Mass Index (BMI) of an individual based on their weight (in kilograms) and height (in metres).
Author: Ian Wabwire
Reg No:BSCIT-05-0069/2024
Date:18/03/2025
*/




#include <iostream>

using namespace std;

int main() {
    float weight, height, bmi;

    // Prompt user for input
    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (m): ";
    cin >> height;

    // Calculate BMI
    bmi = weight / (height * height);

    // Display BMI
    cout << "\nBMI: " << bmi << endl;

    // Classify BMI category
    if (bmi < 18.5) {
        cout << "Category: Underweight" << endl;
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Category: Normal weight" << endl;
    } else if (bmi >= 25 && bmi <= 29.9) {
        cout << "Category: Overweight" << endl;
    } else {
        cout << "Category: Obesity" << endl;
    }

    return 0;
}

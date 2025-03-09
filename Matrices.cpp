//C++ 
/*
C++ Program for matrices
Author: Ian Wabwire
Reg No:BSCIT-05-0069/2024
Date:09/03/2025
*/



#include <iostream>

using namespace std;

// Function to print numbers in 2D
void print2D(int rows, int cols) {
    cout << "2D Representation:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << i * cols + j + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print numbers in 3D
void print3D(int x, int y, int z) {
    cout << "3D Representation:" << endl;
    for (int i = 0; i < x; i++) {
        cout << "Layer " << i + 1 << ":" << endl;
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << (i * y * z + j * z + k + 1) << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

// Function to print numbers in 4D
void print4D(int a, int b, int c, int d) {
    cout << "4D Representation:" << endl;
    for (int i = 0; i < a; i++) {
        cout << "Dimension " << i + 1 << ":" << endl;
        for (int j = 0; j < b; j++) {
            cout << " Layer " << j + 1 << ":" << endl;
            for (int k = 0; k < c; k++) {
                for (int l = 0; l < d; l++) {
                    cout << (i * b * c * d + j * c * d + k * d + l + 1) << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main() {
    int rows = 3, cols = 3;
    int x = 2, y = 3, z = 3;
    int a = 2, b = 2, c = 2, d = 2;
    
    print2D(rows, cols);
    print3D(x, y, z);
    print4D(a, b, c, d);
    
    return 0;
}

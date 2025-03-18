//C++ 
/*
C++ Program for Player Function.
Author: Ian Wabwire
Reg No:BSCIT-05-0069/2024
Date:18/03/2025
*/


#include <iostream>
#include <string>

using namespace std;

// Define Player structure
struct Player {
    string name;
    int score;
    int level;
};

// Function to display player details
void displayPlayer(const Player& p) {
    cout << "\nPlayer Details:" << endl;
    cout << "Name: " << p.name << endl;
    cout << "Score: " << p.score << endl;
    cout << "Level: " << p.level << endl;
}

int main() {
    Player player1, player2;

    // Input player details
    cout << "Enter details for Player 1:" << endl;
    cout << "Name: ";
    getline(cin, player1.name);
    cout << "Score: ";
    cin >> player1.score;
    cout << "Level: ";
    cin >> player1.level;
    cin.ignore(); // Clear the input buffer

    cout << "\nEnter details for Player 2:" << endl;
    cout << "Name: ";
    getline(cin, player2.name);
    cout << "Score: ";
    cin >> player2.score;
    cout << "Level: ";
    cin >> player2.level;

    // Display player details
    displayPlayer(player1);
    displayPlayer(player2);

    return 0;
}

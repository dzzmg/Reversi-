// Dilnaz project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "board.h"
#include "player.h"
#include <fstream>
using namespace std;

int main() {
    fstream myFile;
    myFile.open("game.txt", ios::out);
    if (myFile.is_open()) {
        //myFile<<
    }
    int size = 0;
    string player1;
    string player2;
    cout << "Player 1 give your name:    " << endl;
    cin >> player1;
    cout << "Player 2 give your name:    " << endl;
    cin >> player2;
   // Player (player1);
  //  Player(player2);
    cout << "Enter the board size: ";
    cin >> size;
    while (size < 6 || size>10 || size % 2 != 0) {
        cout << "Enter correct size(even number between 6 and 10)!" << endl;
        cout << "enter the board size: ";
        cin >> size;
    }
    Board b(size);
   b.render();
    b.initial_positions();
    return 0;
}
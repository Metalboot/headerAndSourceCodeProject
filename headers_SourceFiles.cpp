// headers_SourceFiles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Author: Donald Christensen
Email : donchris@uat.edu
Assignment Name : Header and Source File - Street Driver
*/

// Night Racer
// A personalized racing game

// Include libraries & header files
#include <iostream>
#include <string>
#include "functions.h"

// Namespace Block
using namespace std;

// Variable Block

// Variables for user input
string start = "";
string restart = "";
string bikeLane = "";
string crowdedStreet = "";
string sandyBeach = "";

// Variables for player setup
string racer;
string rival;
string rival2;
string champion;

// Variable for "speed up" section
string speedUp = "";
string currSpeedUp = speedUp;

// Variables for endings
string winChoice = "";
string lostChoice = "";

// Program Start
int main() {
    while (winChoice != "quit" || winChoice != "restart" || lostChoice != "quit" || lostChoice != "restart") {
        playGame();
        if (lostChoice == "quit" || winChoice == "quit") {
            return 0;
        }
    }
    // Needed return 0; at the end of all non-void functions as it was throwing a warning about control reaches the end of a non-void function. Does not impact gameplay.
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

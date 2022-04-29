// functions.h : This file contains the 'main' function. Program execution begins and ends there.
//

#pragma once
#include <string>

using namespace std;

// External Variables Defined
extern string start;
extern string restart;
extern string bikeLane;
extern string crowdedStreet;
extern string sandyBeach;
extern string racer;
extern string rival;
extern string rival2;
extern string champion;
extern string speedUp;
extern string currSpeedUp;
extern string winChoice;
extern string lostChoice;

// Function Prototypes Defined
int currSpeed(int x);
string playGame();
void opening();
void raceStart();
void bikeLanesceen();
void crowdedStreetScene();
void sandyBeachScene();
void coast();
string endingWin();
string endingLost();

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

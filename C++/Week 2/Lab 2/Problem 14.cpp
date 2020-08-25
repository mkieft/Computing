///File: lab2/p14.cpp Maura Kieft
/// You and the computer roll 2 dice. Winner is the one with bigger sum

#include <iostream>
using namespace std;
#include <cstdlib> //for rand()
int main() {


    cout << "You are playing against the computer--Bigger sum wins.";

    int d1 = (rand() % 6) + 1; //user die roll
    int d2 = (rand() % 6) + 1;
    int d3 = d1+d2; //sum of die roll
    cout << "\nYou rolled: " << "\t" << d1 << "\t" << d2 << "\nSum: " << d3;

    int c1 = (rand() % 6) + 1; // computer die roll
    int c2 = (rand() % 6) + 1;
    int c3 = c1+c2;//sum of die roll
    cout << "\nComputer rolled: " << "\t" << c1 << "\t" << c2 << "\nSum: " << c3;

    if (d3 > c3)
        cout << "\n\nYou are the winner!" << "\n";
    if (c3 > d3)
        cout << "\n\nComputer is the winner" << "\n";



    return 0;
}//main

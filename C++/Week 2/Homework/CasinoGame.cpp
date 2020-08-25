///File week2/Homework/CasinoGame.cpp MK
///Write a program for money conversion.

#include <iostream>
#include <cstdlib> //for rand()

using namespace std;
void Game();
void playAgain();
int main() {
    cout << "Si vis pacem, para bellum - Vegetius\n";
    int ans = 1;
    while ( ans != 0){

        cout << "\n\nCasino Game Menu.\n 1. Author\n";
        cout << "2.Rules\n";
        cout << "3.Game\n";
        cout << "0. Exit\n";
        cout << "Enter Option: "; cin >> ans;

        switch (ans){
            case 1: cout << "Maura Kieft"; break;
            case 2: cout << "Try to roll to get to 15"; break;
            case 3: Game();
            case 4: playAgain(); break;
            case 0: cout << "Bye"; break;
            default: "Bad input";


        }//switch





    }//while

    return 0;
}//main
void Game(){
    int d1 = (rand() % 6) + 1; // die roll
    int d2 = (rand() % 6) + 1;
    int d3 = (rand() % 6) + 1;

    cout << "Die 1: " << d1 << "\tDie 2: " << d2 << "\tDie 3: " << d3;
    cout << "\nDie sum: " << d1+d2+d3;


    if ((d1+d2+d3) == 15)
        cout << "Rolled a sum 15, Winner!\n";
    else
        cout << "Did not roll a sum of 15, loser.\n";

}//Game

void playAgain(){
    string ans;
    cout << "Play again? (Y or N): "; cin >> ans;
    if ((ans) == "Y")
        Game();
    else
        cout << "Bye";

}//playAgain

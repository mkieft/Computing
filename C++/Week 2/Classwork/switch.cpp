/// File: week3/menu1.cpp MM
/// menu for a game
#include <iostream>
using namespace std;
void game();
int main() {
    int ans = 1; //user's option to answer
    while ( ans != 0 ) {
        cout << "\nMoney Conversion Menu.\n 1. Author\n"
            << "2.Author\n"
            << "3.Game\n"
            << "0.Exit\n";
        cout << "Enter option? " ;
        cin >> ans;
        switch (ans){
            case 1: cout << "no help";      break;
            case 2: cout << "Maura Kieft";  break;
            case 3: game();                 break;
            case 0: cout << "Bye";          break;
            default: cout << "Bad input";

        }//switch
    }//while loop
    return 0;
}//main
void game () { cout << "Start Game";}

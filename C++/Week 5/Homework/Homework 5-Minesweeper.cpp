///File: Week5/Homework/Minesweeper.cpp  MK

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int n = 5;
void printMatrix(int M[][n]);
int genMatrix(int M[][n]);
void mineCount(int M[][n]);
void game(int M[][n]);
int main() {
    srand(time(0));
    int M [n][n];//always put rows first then columns
    int ans = 1;
    genMatrix(M); printMatrix(M); mineCount(M);
    while ( ans != 0 ) {
        cout << "\nWelcome to the game of Minesweeper.\n"
            << "\n1. Author\n"
            << "2.Rules\n"
            << "3.Game\n"
            << "0.Exit\n";
        cout << "Enter option? " ;
        cin >> ans;
        switch (ans){
            case 1: cout << "Maura Kieft";      break;
            case 2: cout << "This game is minesweeper. You guess a column and a row and try to not hit a mine. If you hit a mine you lose.";  break;
            case 3: game(M); break;
            case 0: cout << "Bye";          break;
            default: cout << "Bad input";



    return 0;
}//main
void game(int M[][n]){
    int r,c;
    while (true){
    cout << "\n\nStep to see if there's mine";
    cout << "\n\nEnter row: "; cin >> r;
    cout << "\nEnter column: "; cin >> c;
    cout << "\nNumber you guessed: "<< M[r][c];
    if (M[r][c]== 1)

        cout << "\n\nMINE"
             << "\nYOU EXPLODED";

    else
        cout << "\nNo mine, keep going.";
    }//while
}//displayR

void mineCount(int M[][n]){
    int count1 = 0;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){

            if (M[i][j] == 1)
                count1 = count1 + 1;

        }//for2
    }//for
    cout << "\n\nNumber of mines: " << count1 << endl;
}//mineCount
int genMatrix(int M[][n]){
     for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
             M[i][j] = rand() % 2;  //for random 0 or 1
        }//for 2
    }//for
}//genMatrix

//i = rows, j = columns
void printMatrix(int M[][n]){
    for (int i = 0 ; i < n ; i ++){ //take each row
        for (int j = 0 ; j < n ; j ++){                 //have to have two loops for row and column
            cout << M[i][j] << "\t";
        }//for 2
        cout << endl;   //to create as a table-- jumps to next row
    }//for 1
}//printMatrix


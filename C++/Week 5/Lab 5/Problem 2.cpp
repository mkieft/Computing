///File: Week5/lab5/Problem 2.cpp MK
///Generate a secret 5x5 board with 0 and 1s. (1 means there is a mine in that place)
///Display number of mines.
///Ask user to step. Check if he exploded
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int n = 5; //size of matrix is 3 x 3 (3 rows and 3 columns) -- n is a global variable so all functions see it (dont have to send to func)
void printMatrix(int M[][n]);
int genMatrix(int M[][n]);
void mineCount(int M[][n]);
void guessMine(int M[][n]);
int main() {
    srand(time(0));
    int M [n][n];//always put rows first then columns

    genMatrix(M);
    printMatrix(M);
    mineCount(M);
    guessMine(M);

return 0;
}//main
void guessMine(int M[][n]){
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


///File: Week5/lab5/Problem1.cpp MK
///Given a matrix 3x3. Generate it with 0 and 1 randomly
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int n = 3; //size of matrix is 3 x 3 (3 rows and 3 columns) -- n is a global variable so all functions see it (dont have to send to func)
void printMatrix(int M[][n]);
void getCorners(int M[][n]);
int genMatrix(int M[][n]);
void printDiag1(int M[][n]);
void countNum(int M[][n]);
void printDiag2(int M[][n]);
void displayR(int M[][n]);
int main() {

    int M[n][n];
    genMatrix(M); //initialize with random values 0 /1
    printMatrix(M);
    getCorners(M);
    printDiag1(M);
    printDiag2(M);
    countNum(M);
    displayR(M);

return 0;
}//main
void displayR(int M[][n]){
    int r,c;
    cout << "\n\nThis allows you to print user's row and column";
    cout << "\n\nEnter row: "; cin >> r;
    cout << "\nEnter column: "; cin >> c;
    cout << M[r][c];
}//displayR
void countNum(int M[][n]){
    int count0 = 0;
    int count1 = 0;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            if (M[i][j] == 0 )
                count0 = count0 + 1;
            if (M[i][j] == 1)
                count1 = count1 + 1;

        }//for2
    }//for
    cout << "\n\n\nNumber of 0: " << count0 << endl;
    cout << "Number of 1: " << count1 << endl;
}//countNum
void printDiag1(int M[][n]){ //pattern of the table is M[i][i]
    cout << "\n\nDiagonal #1: " << endl;
    for (int i = 0 ; i < n ; i++){
        cout  << M[i][i] << "\t";
    }//for
}//printDiag1
void printDiag2(int M[][n]){ //pattern of the table is M[i][i]
    cout << "\n\nDiagonal #2: " << endl;
    for (int i = 0 ; i < n ; i++){
        cout  << M[i][n-1-i] << "\t";
    }//for
}//printDiag1

void getCorners(int M[][n]){
     cout << "\nCorners: \n" << M[0][0] << "\t" << M[0][n-1] << endl
                           << M[n-1][0] << "\t" << M[n-1][n-1] << endl <<endl;
}//getCorners
int genMatrix(int M[][n]){
     for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
             M[i][j] = rand() % 2;  //for random 0 or 1
        }//for 2
    }//for
}//genMatrix


//i = rows, j = columns
void printMatrix(int M[][n]){
    cout << "Matrix generated: " << endl;
    for (int i = 0 ; i < n ; i ++){ //take each row
        for (int j = 0 ; j < n ; j ++){                 //have to have two loops for row and column
            cout << M[i][j] << "\t";
        }//for 2
        cout << endl;   //to create as a table-- jumps to next row
    }//for 1
}//printMatrix


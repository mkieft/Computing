///File: Week5/classwork/matrix0.cpp MK

#include <iostream>
using namespace std;
const int n = 3; //size of matrix is 3 x 3 (3 rows and 3 columns) -- n is a global variable so all functions see it (dont have to send to func)
void printMatrix(int M[][n]);
void printDiag1(int M[][n]);
int main() {

    int M [n][n]= { {1,2,3},{4,5,6},{7,8,9} }; //always put rows first then columns

    cout << "Corners: \n" << M[0][0] << "\t" << M[0][2] << endl
                          << M[2][0] << "\t" << M[2][2] << endl; //prints corners of the matrix

    //write for any matrix n x n
    cout << "Corners: \n" << M[0][0] << "\t" << M[0][n-1] << endl
                          << M[n-1][0] << "\t" << M[n-1][n-1] << endl <<endl;

    printMatrix(M);
    printDiag1(M);
return 0;
}//main
void printDiag1(int M[][n]){ //pattern of the table is M[i][i]
    cout << "\n\nDiagonals are: " << endl;
    for (int i = 0 ; i < n ; i++){
        cout  << M[i][i] << "\t";
    }//for


}//printDiag1

//i = rows, j = columns
void printMatrix(int M[][n]){
    for (int i = 0 ; i < n ; i ++){ //take each row
        for (int j = 0 ; j < n ; j ++){                 //have to have two loops for row and column
            cout << M[i][j] << "\t";
        }//for 2
        cout << endl;   //to create as a table-- jumps to next row
    }//for 1
}//printMatrix


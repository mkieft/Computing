///File: Week5/classwork/matrixSum.cpp MK

#include <iostream>
using namespace std;
const int n = 3; //size of matrix is 3 x 3 (3 rows and 3 columns) -- n is a global variable so all functions see it (dont have to send to func)
void printMatrix(int M[][n]);
int sumMatrix(int M[][n]);
int main() {

    int M [n][n]= { {1,2,3},{4,5,6},{7,8,9} }; //always put rows first then columns
    printMatrix(M);
    cout << "Sum is: " << sumMatrix(M);

return 0;
}//main
int sumMatrix(int M[][n]){
    int sum1 = 0;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
        sum1= sum1 + M[i][j];
        }//for 2
    }//for
    return sum1;
}//sumMatrix

//i = rows, j = columns
void printMatrix(int M[][n]){
    for (int i = 0 ; i < n ; i ++){ //take each row
        for (int j = 0 ; j < n ; j ++){                 //have to have two loops for row and column
            cout << M[i][j] << "\t";
        }//for 2
        cout << endl;   //to create as a table-- jumps to next row
    }//for 1
}//printMatrix


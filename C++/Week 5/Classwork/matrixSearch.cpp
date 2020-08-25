///File: Week5/classwork/matrixSearch.cpp MK

#include <iostream>
using namespace std;
const int n = 3; //size of matrix is 3 x 3 (3 rows and 3 columns) -- n is a global variable so all functions see it (dont have to send to func)
void printMatrix(int M[][n]);
bool searchMatrix(int M[][n], int w);
int main() {

    int M [n][n]= { {1,2,3},{4,5,6},{7,8,9} }; //always put rows first then columns
    printMatrix(M);

    int w;
    cout << "\nSEARCH IN M[]: \nEnter int?  "; cin >> w;
    cout << "Found? " << searchMatrix(M,w);
return 0;
}//main
bool searchMatrix(int M[][n], int w){
    for (int i = 0; i < n; i++){
        for (int j = 0 ; j < n ; j++){
            if (w == M[i][j])
                return true;
        }//for 2
    }//for
    return false;
}//searchMatrix

//i = rows, j = columns
void printMatrix(int M[][n]){
    for (int i = 0 ; i < n ; i ++){ //take each row
        for (int j = 0 ; j < n ; j ++){                 //have to have two loops for row and column
            cout << M[i][j] << "\t";
        }//for 2
        cout << endl;   //to create as a table-- jumps to next row
    }//for 1
}//printMatrix


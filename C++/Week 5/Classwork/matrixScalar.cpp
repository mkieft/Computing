///File: Week5/classwork/matrixScalar.cpp MK

#include <iostream>
using namespace std;
const int n = 2;
void printArray(int A[][n]);
void readArray(int A[][n]);
void scalar (int A[][n], int w, int R[][n]);
int main() {
    int A[n][n]; //given matrix by user
    int R[n][n]; //result
    int w = 2; //our scalar

    readArray(A);
    printArray(A);
    scalar(A,w,R);
    printArray(R); //print array "result"

    return 0;
}//main
void scalar (int A[][n], int w, int R[][n]){
    for (int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < n ; j++){
            R[i][j] = A[i][j] * w;
        }//for 2
    }//for
}//scalar

void readArray(int A[][n]){
    for (int i = 0 ; i < n ; i++){  //row
            cout << "Enter Row:" << i << "=?\n";
        for ( int j = 0 ; j < n ; j++){
            cin >> A[i][j];
        }//for 2

    }//for
}//readArray

void printArray(int A[][n]){
    cout << "\n\nMatrix: \n";
    for (int i = 0 ; i < n ; i++){  //row
        for ( int j = 0 ; j < n ; j++){
            cout << A[i][j] << "\t";
        }//for 2
        cout << endl;
    }//for
}//printArray



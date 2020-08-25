///File: Week5/lab5/problem1- add matrices.cpp MK
///add two matrices
#include <iostream>
using namespace std;
const int n = 2; //size of matrix is 3 x 3 (3 rows and 3 columns) -- n is a global variable so all functions see it (dont have to send to func)
void readMatrix(int A[n][n]);
void printMatrix(int A[][n]);
void addMatrix(int A[][n],int B[][n],int R[][n]);
int main() {

    int A [n][n]; //input
    int B [n][n];
    int R [n][n]; //result
    readMatrix(A);
    printMatrix(A);
    readMatrix(B);
    printMatrix(B);
    addMatrix(A,B,R);
    cout << "\nMatrices added: \n";
    printMatrix(R);
return 0;
}//main
void readMatrix(int A[n][n]){
    for (int i = 0 ; i < n ; i++){
        cout << "\nEnter row " <<i <<"? \n";
        for (int j = 0 ; j < n ; j++){ //print row i
            cin >> A[i][j];

        }//for
    }//for

}//printM
void addMatrix(int A[][n],int B[][n],int R[][n]){
     for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){ //print row i    //for all R[i][j]
        int sum = 0;
        for (int k = 0; k < n; k++){
            sum = A[i][k] + B[k][j];
            }   //for3
        R[i][j] = sum;
        }//finish column

    }//finish row
}//addMatrix

//i = rows, j = columns
void printMatrix(int A[][n]){

    for (int i = 0 ; i < n ; i ++){ //take each row
        for (int j = 0 ; j < n ; j ++){
            cout << A[i][j] << "\t";
        }//for 2
        cout << endl;
    }//for 1
}//printMatrix

///File: week6/classwork/multiplyMatrix.cpp MK

#include <iostream>
using namespace std;
const int n = 3;
void readM(int A[n][n]);
void printM(int A[n][n]);
void multM(int A[n][n],int B[n][n], int R[n][n]);
int main() {
    int A[n][n];
    int B[n][n]; //input
    int R[n][n]; //result

    readM(A);
    printM(A);
    readM(B);
    printM(B);
    multM(A,B,R); printM(R);

    return 0;
}//main
void multM(int A[n][n],int B[n][n], int R[n][n]){
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){ //print row i    //for all R[i][j]
        int sum = 0;
        for (int k = 0; k < n; k++){
            sum = sum + A[i][k] * B[k][j];
            }   //for3
        R[i][j] = sum;
        }//finish column

    }//finish row
}//multM

void readM(int A[n][n]){
    for (int i = 0 ; i < n ; i++){
        cout << "\nEnter row " <<i <<"? \n";
        for (int j = 0 ; j < n ; j++){ //print row i
            cin >> A[i][j];

        }//for
    }//for

}//printM

void printM(int A[n][n]){
    cout << "\nMatrix: \n";
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){ //print row i
            cout << A[i][j]<< "\t";

        }//for
        cout << endl;
    }//for

}//printM

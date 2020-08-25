///File: Week5/Homework/Matrix Operations.cpp MK

///File: Week5/lab5/Problem1.cpp MK
///Given a matrix 3x3. Generate it with 0 and 1 randomly
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int n = 3; //size of matrix is 3 x 3 (3 rows and 3 columns) -- n is a global variable so all functions see it (dont have to send to func)
void printMatrix(int A[][n]);
void getCorners(int A[][n]);
int genMatrix(int A[][n]);
void printDiag1(int A[][n]);
void countNum(int A[][n]);
void printDiag2(int A[][n]);
void displayR(int A[][n]);
void addMatrix(int A[][n],int B[][n],int R[][n]);
void multM(int A[n][n],int B[n][n], int R[n][n]);
int main() {

    int A[n][n];
    int B[n][n];
    int R[n][n]; //result
    genMatrix(A); //initialize with random values 0 /1
    printMatrix(A);
    int ans= 1;
    while ( ans != 0 ) {
        cout << "\n\nMatrix Operations.\n "
            << "1.Author\n"
            << "2.Corners\n"
            << "3.Diagonals\n"
            << "4. Print specific row and column\n"
            << "5. Add Matrices\n"
            << "6. Multiply Matrices\n"
            << "7. Numbers of 0's and 1's\n"
            << "0.Exit\n";
        cout << "Enter option? " ;
        cin >> ans;

    switch (ans){
            case 1: cout << "Maura Kieft and Sneha Hoda";      break;
            case 2: getCorners(A);  break;
            case 3: printDiag1(A); printDiag2(A); break;
            case 4: displayR(A); break;
            case 5: genMatrix(B); printMatrix(B); addMatrix(A,B,R); cout << "Matrices added: \n"; printMatrix(R); break;
            case 6: genMatrix (B); printMatrix(B); multM(A,B,R); cout << "Matrices multiplied: \n"; printMatrix(R); break;
            case 7: countNum(A); break;
            case 0: cout << "Bye";          break;
            default: cout << "Bad input";

        }//while
    }//switch



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
void displayR(int A[][n]){
    int r,c;
    cout << "\n\nThis allows you to print user's row and column";
    cout << "\n\nEnter row: "; cin >> r;
    cout << "\nEnter column: "; cin >> c;
    cout << A[r][c];
}//displayR
void countNum(int A[][n]){
    int count0 = 0;
    int count1 = 0;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            if (A[i][j] == 0 )
                count0 = count0 + 1;
            if (A[i][j] == 1)
                count1 = count1 + 1;

        }//for2
    }//for
    cout << "\n\n\nNumber of 0: " << count0 << endl;
    cout << "Number of 1: " << count1 << endl;
}//countNum
void printDiag1(int A[][n]){ //pattern of the table is M[i][i]
    cout << "\n\nDiagonal #1: " << endl;
    for (int i = 0 ; i < n ; i++){
        cout  << A[i][i] << "\t";
    }//for
}//printDiag1
void printDiag2(int A[][n]){ //pattern of the table is M[i][i]
    cout << "\n\nDiagonal #2: " << endl;
    for (int i = 0 ; i < n ; i++){
        cout  << A[i][n-1-i] << "\t";
    }//for
}//printDiag1

void getCorners(int A[][n]){
     cout << "\nCorners: \n" << A[0][0] << "\t" << A[0][n-1] << endl
                           << A[n-1][0] << "\t" << A[n-1][n-1] << endl <<endl;
}//getCorners
int genMatrix(int A[][n]){
     for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
             A[i][j] = rand() % 2;  //for random 0 or 1
        }//for 2
    }//for
}//genMatrix


//i = rows, j = columns
void printMatrix(int A[][n]){
    cout << "New Matrix generated: " << endl;
    for (int i = 0 ; i < n ; i ++){ //take each row
        for (int j = 0 ; j < n ; j ++){                 //have to have two loops for row and column
            cout << A[i][j] << "\t";
        }//for 2
        cout << endl;   //to create as a table-- jumps to next row
    }//for 1
}//printMatrix
void addMatrix(int A[][n],int B[][n],int R[][n]){
     for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){ //print row i    //for all R[i][j]
          R[i][j] = A[i][j] + B[i][j];
        }//finish column
    }//finish row
}//addMatrix

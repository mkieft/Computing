///File: week4/array0.cpp MK
#include <iostream>
using namespace std;
void printArr( float A[], int n);
int main(){
    const int n = 4;
    float A[n] = {2.2, 0, 1.1, 7.7};
    cout << "First = " << A[0];
    cout << "\nLast = " << A[n-1] << endl;

    printArr(A,n);

    return 0;
}//main

void printArr( float A[], int n ) {
    for ( int i = 0 ; i < n ; i++){
        cout << A[i] << '\t';


    }//for
}//printArr

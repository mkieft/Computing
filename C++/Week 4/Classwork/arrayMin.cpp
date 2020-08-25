///File: week4/arrayMIN.cpp MK
/// find mIN of an array
#include <iostream>
using namespace std;
void printArr( float A[], int n);
float myMin( float A[], int n);
int main(){
    const int n = 5;
    float A[n] = {2.2, 0, 1.1, 7.7, 13};
    printArr(A,n);
    cout << "\nMin is = " << myMin( A, n);
    return 0;
}//main

float myMin( float A[], int n) { //array and size}
    float res = A[0];
    for ( int i = 1 ; i < n ; i++){
        if (A[i] < res) res = A[i];
    }//for
    return res;

}//myMax
void printArr( float A[], int n ) {
    for ( int i = 0 ; i < n ; i++){
        cout << A[i] << '\t';


    }//for
}//printArr

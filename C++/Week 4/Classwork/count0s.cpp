///File: week4/count0s.cpp MK
#include <iostream>
using namespace std;
void printArr( float A[], int n);
int mycount(float A[], int n, float w);
int main(){
    const int n = 4;
    float A[n] = {2.2, 0, 1.1, 7.7};
    cout << "First = " << A[0];
    cout << "\nLast = " << A[n-1] << endl;

    printArr(A,n);
    cout << "\nNumber of 0's: " << mycount( A, n, 0 );
    return 0;
}//main
int mycount(float A[], int n, float w){//count w in A[]
    int many = 0;
    for (int i = 0; i < n ; i++){
        if ( A[i] == w) many++;

    }//for
    return many;

}//mycount

void printArr( float A[], int n ) {
    for ( int i = 0 ; i < n ; i++){
        cout << A[i] << '\t';


    }//for
}//printArr

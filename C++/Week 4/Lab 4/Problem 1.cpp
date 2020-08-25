///File: lab4/p2.cpp MK
///Check palindrome
#include <iostream>
using namespace std;
void readArray(float A[], int n);
void printArray(float A[], int n);
void printArrayRev(float A[], int n);
const int SIZE = 100;
int main(){
    float B[ SIZE ];//static allocation
    int n; //declare actual size
    cout << " How big is array? (Max = 100) ";
    cin >> n; //enter actual size
    readArray(B,n);
    printArray(B,n);
    printArrayRev(B,n);
    return 0;
}//main


void readArray(float A[], int n){
    cout << "Enter array size: " << n <<"? ";
    for (int i = 0 ; i < n ; i++){
       cin >> A[ i ];

    }//for loop

}//readArray

void printArray(float A[], int n){ //print array
    for (int i = 0 ; i < n ; i++){
        cout << A[ i ] << '\t';

    }//for loop
    cout << endl;
}//printArray
void printArrayRev(float A[], int n) {
    for (int i = n-1; i >=0  ; i--) { //print array in reverse
        cout << A[i] << '\t';

    }
    cout << endl;

}//myreverse

///File: lab4/p1.cpp MK
///
#include <iostream>
using namespace std;
void readArray(float A[], int n);
void printArray(float A[], int n);
string myreverse(float A[], int n);
const int SIZE = 100;
int main(){
    float A[ SIZE ];//static allocation
    int n; //declare actual size
    cout << " How big is array? (Max = 100) ";
    cin >> n; //enter actual size
    readArray(A,n);
    printArray(A,n);
    return 0;
}//main


void readArray(float A[], int n){
    cout << "Enter array size " << n << "? " << endl;
    for (int i = 0 ; i < n ; i++){
       cin >> A[ i ];

    }//for loop

}//readArray

void printArray(float A[], int n){ //print array
    for (int i = 0 ; i < n ; i++){
        cout << A[ i ] << endl;

    }//for loop
}//printArray
string myreverse(float A[], int n) {
    string r = ""; //result
    for (int i = 0; i < n ; i++) {
        r = A[i] + r;

    }
    return r;
}//myreverse

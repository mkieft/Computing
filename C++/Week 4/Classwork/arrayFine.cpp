///File: week4/arrayfind.cpp MK

#include <iostream>
using namespace std;
void printArray(string A[], int n);
void readArray (string A[], int n);
int mycount(string A[], int n, string w);
int main(){
    const int n = 6; //constant
    string A[n];
    readArray (A,n);
    printArray(A, n);
    cout << mycount(A,n, "ann");
    return 0;
}//main
int mycount(string A[], int n, string w){
    int res = 0; //result
    for (int i = 0 ; i < n ; i++){
        if (A[i] == w) res++;

    }//for loop
    return res;
}//mycount

void readArray(string A[], int n){
    cout << "Enter array size " << n << endl;
    for (int i = 0 ; i < n ; i++){
        cout << i << ".? "; cin >> A[i];

    }//for loop

}//readArray

void printArray(string A[], int n){ //print array
    cout << A; //address in memory written on 8 chars (from hexadecimal 0 - F )
    for (int i = 0 ; i < n ; i++){
        cout << "\n" << i << ". " << A[i];

    }//for loop
}//printArray

///File: lab4/p3.cpp MK
///Have a list of words. Display a random word. Imagine a list of names of famous CS people: {pascal, ada, lovelace, babbage, boole, turing, leibniz
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
void printArray(string A[], int n);
int main(){
    srand(time(0));
    const int n = 6; //constant
    string w; //guess from user
    string A[n] = {"Pascal", "Lovelace", "Turing", "Babbage", "Bool", "Leibniz"}; //adding to a list
    printArray(A, n);
    int pos = rand() % n; //position
    string rand1 = A[pos];

    cout << "Random name = " << rand1;
    return 0;
}//main

void printArray(string A[], int n){ //print array
    cout << A; //address in memory written on 8 chars (from hexadecimal 0 - F )
    for (int i = 0 ; i < n ; i++){
        cout << i << ". " << A[i] << "\n";

    }//for loop
}//printArray

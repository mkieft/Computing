///File: week3/hwk3.cpp MK
//Guessing word game
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
void printArray(string A[], int n);
int main(){
    srand(time(0));
    const int n = 6; //constant
    string w; //guess from user
    string A[n] = {"Nick", "Josh", "Jackson", "Connor", "Colin", "Maura"}; //adding to a list
    printArray(A, n);
    int pos = rand() % n; //position
    string secret = A[pos];
    cout << "\nEnter your guess: "; cin >>w;
    string z == "Y";
    while (string z == "Y"){
        if (secret == w)
            cout << "Win";
    else
            cout << "Lose";
    cout << "Random name = " << secret;
    cout << "Continue playing? Y or N: "; cin >> z;
    }//while
    return 0;
}//main

void printArray(string A[], int n){ //print array
    cout << A; //address in memory written on 8 chars (from hexadecimal 0 - F )
    for (int i = 0 ; i < n ; i++){
        cout << i << ". " << A[i] ;

    }//for loop
}//printArray

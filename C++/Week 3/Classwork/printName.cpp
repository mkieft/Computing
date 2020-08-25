///File: lab3/p11.cpp MK
/// Ask for your name. Write each letter 3 times
#include <iostream>
using namespace std;
void printThree(string S);
int main() {
    string S;
    cout << "Enter your name: "; cin >> S;
    printThree(S);

    return 0;
}//main

void printThree(string S){
    for (int i = 0 ; i < S.size() ; i++) {
        cout << S[i] << S[i] << S[i] << endl; //prints letter three times
    }

}//printTwice

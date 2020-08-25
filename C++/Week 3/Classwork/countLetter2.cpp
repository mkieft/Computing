///File: week3/printName.cpp MK
/// count a's in name
#include <iostream>
using namespace std;
void printTwice(string S);
int main() {
    string S;
    cout << "Enter your name: "; cin >> S;
    printTwice(S);

    return 0;
}//main

void printTwice(string S){
    for (int i = 0 ; i < S.size() ; i++) {
        cout << S[i] << " " << S[i] << endl;
    }

}//printTwice

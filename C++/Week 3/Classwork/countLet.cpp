///File: lab3/p6.cpp MK
/// Ask for a word and count vowels
#include <iostream>
using namespace std;
int countVow(string v);
int main() {
    string v; //for name
    cout << "Enter a word to count vowels: "; cin >> v;

    cout << "Number of vowels in input = " << countVow(v);

    return 0;
}//main

int countVow(string v) { //counts occurrances of vowels in user input
    int sum = 0;
    for (int i = 1; i < v.size() ; i++){
        if (v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u') sum ++;
    }
    return sum;
}//countLet

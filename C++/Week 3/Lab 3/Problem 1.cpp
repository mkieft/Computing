///File: lab3/problem1.cpp MK
///Print the English alphabet in reverse, upper case and lower case 65-123

#include <iostream>
using namespace std;
int main(){

    for (char i = 'a' ; i <= 'z' ; i--){ //alphabet in lowercase
        cout << i << "\n";
    }

    for (char c= 'A' ; c <= 'Z' ; c--){ //alphabet in uppercase
        cout << c << "\n";
    }
    return 0;
}//main

///File: lab2/p4.cpp Maura Kieft
///Write a program to display all powers of 2 till n ( ask for n).

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter an even integer between 10 and 20: ";
    cin >> n;
    if (n <= 20 && n >= 10 && n % 2 == 0)
        cout << "ok";
    else
        cout << "incorrect. \nGoodbye";


    return 0;
}//main

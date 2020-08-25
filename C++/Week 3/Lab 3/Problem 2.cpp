/// File: week3/problem2.cpp MM
/// Ask for a character and display its ASCII code. Ask for continue?.
#include <iostream>
using namespace std;
int main() {
    string ans = "yes";
    char c;
    char n;
    while (ans == "yes" || ans == "Yes" ) {

        cout << "Enter a character to find ASCII code: "; cin >> n;
        cout << n << " is " << int(n);

        cout << "\nWould you like to continue? (Yes or No)"; cin >> c;


    }//while




    return 0;
} //menu

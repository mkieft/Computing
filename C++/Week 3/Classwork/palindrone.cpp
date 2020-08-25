///File: week3/palindrome.cpp MK
///mom, racecar
#include <iostream>
using namespace std;
bool checkPalin(string s);
string myreverse(string s);
int main() {
    string s;
    cout << "Enter a string: "; cin >> s;
    cout << "\nReversed is: " << myreverse(s);
    cout << "\nIs the string a Palin Drome? " << checkPalin(s);

    return 0;
}//main
bool checkPalin(string s) {
    if ( s == myreverse(s) )
        return true;
    else
        return false;

}//checkPalin


string myreverse(string s) {
    string r = ""; //result
    for (int i = 0; i < s.size() ; i++) {
        r = s[i] + r;

    }
    return r;
}//myreverse

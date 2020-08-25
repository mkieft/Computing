///File: lab3/p12.cpp MK
/// Ask for your name. Write it in reverse. Ask a couple of times ("continue(y/n)?"
#include <iostream>
using namespace std;
string myreverse(string s);
int main() {
    string x = ("");
    string s = "";
    if (string x == "Y")
        string s= "";
        cout << "Enter your name: "; cin >> s;
        cout << myreverse(s);
        cout << "Continue? Y or N: "; cin >> x;
    }
    return 0;
}//main

string myreverse(string s) {
    string r = ""; //result
    for (int i = 0; i < s.size() ; i++) {
        r = s[i] + r;

    }
    return r;
}//myreverse

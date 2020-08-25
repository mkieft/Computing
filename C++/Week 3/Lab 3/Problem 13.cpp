/// File: lab3/prob 13.cpp MM
/// swap first with last
#include <iostream>
using namespace std;
void swapLast(string s);
int main() {
    string s;
    cout << "Enter word: "; cin >> s;
    swapLast(s);
    return 0;
} //menu
void swapLast(string s) {
    char z;
    z=s[0];
    s[0]=s[s.size()-1];
    s[s.size()-1]=z;
    cout <<s;


}//swapLast


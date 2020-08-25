///File: week3/hwk3.cpp MK
/// Enter string--at least 5 operations
#include <iostream>
using namespace std;
void printThree(string s);
string myreverse(string s);
int countVow(string v);
bool checkPalin(string s);
void uppercase(string s);
int main() {
    string s;
    cout << "Enter string: "; cin >> s;
    printThree(s);
    cout << "Reversed: " << myreverse(s);
    cout << "\nNumber of vowels: " << countVow(s);
    cout << "\nPaline Drone? " << checkPalin(s);
    uppercase(s);
    return 0;
}//main
void uppercase(string s){
    int upCount = 0;
    for (int i = 0; i < s.size(); i++){
        if (isupper(s[i])) upCount++;

    }//for
    cout << "\nNumber of uppercase: "<< upCount;


} //uppercase

string myreverse(string s) {
    string r = ""; //result
    for (int i = 0; i < s.size() ; i++) {
        r = s[i] + r;

    }
    return r;
}//myreverse

void printThree(string s){
    cout << "Printed three times: \n";
    for (int i = 0 ; i < s.size() ; i++) {

        cout  << s[i] << s[i] << s[i] << endl; //prints letter three times
    }

}//printTwice
int countVow(string v) { //counts occurrances of vowels in user input
    int sum = 0;
    for (int i = 1; i < v.size() ; i++){
        if (v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u') sum ++;
    }
    return sum;
}//countLet
bool checkPalin(string s) {
    if ( s == myreverse(s) )
        return true;
    else
        return false;

}//checkPalin

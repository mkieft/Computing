///File: lab3/p10.cpp MK
/// Password check. If you are Ann or Bob or Cory the program says hello otherwise asks again your password
#include <iostream>
using namespace std;
int main() {
    string S = "none";


    while  (S != "Ann" || S != "Bob" || S  != "Cory"){
        cout << "\nEnter your name: "; cin >> S;
        cout << "\nAccess denied";

    } //while
    cout << "Hello " << S;

    return 0;
}//main



///File: week3/firstLetter.cpp MK
///
#include <iostream>
using namespace std;
int main() {

    string S; //for name
    cout << "Enter Name? ";
    cin >> S;
    cout << "Name has # of characters = " << S.size(); //find # of chars in name
    cout << "\nFirst letter = " << S [0]; //finds first letter of name

    cout << "\nLast letter = " << S[S.size()-1];//position of last letter




    return 0;
}//main

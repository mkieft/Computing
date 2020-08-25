///File: week3/countLet.cpp MK
/// count a's in name
#include <iostream>
using namespace std;
int main() {
    string S; //for name
    cout << "Enter Name? ";
    cin >> S;

    int sum = 0;
    for (int i = 1; i < S.size() ; i++){
        if (S[i] == 'a' || S[i] == 'A' ) sum ++;
    }
    cout << "Number of a in my name = " << sum;

    return 0;
}//main

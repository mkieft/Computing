///File: week2/cond.cpp MK
///IF = check if number 0 < n < 100 or n = 123
#include <iostream>
using namespace std;
int main() {
    float n;
    for (int i = 1 ; i <= 3 ; i++){//i=i+1}
            cout << "Enter a number 0 < n < 100 or n=123: ";
            cin >> n;
            if ( (0 < n) && (n < 100) || (n == 123))
                cout << "thanks";
            else
                {cout << "bad input";
                cout << "you do not pay attention";}
    }// for loop
    cout << "\nBye";
    return 0;
}//main

/// File: week3/problem3.cpp MM
/// Print the first letters in the greek alphabet (hint: alpha is 224)
#include <iostream>
using namespace std;
int main() {

    cout << "First letters of Greek alphabet ASCII\n";
    for (int i = 224 ; i <= 230 ; i++){
        cout << i << " = " << char (i) << endl;

    }

    return 0;
} //menu

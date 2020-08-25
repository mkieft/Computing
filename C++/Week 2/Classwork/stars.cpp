///File: week2/stars.cpp MK
///ask for int and draw n stars
#include <iostream>
using namespace std;
void mystars (int n);
int main() {
    int n;
    cout << "Enter int n? ";
    cin >> n;

    mystars(n);
    cout << "\nBye\n";
    mystars(n);
    return 0;
}//main
void mystars(int m) {
    for (int i=0; i < m ; i++){
        cout << "*";
    }
}

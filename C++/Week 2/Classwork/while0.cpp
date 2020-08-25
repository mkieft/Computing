/// File: week2/while0.cpp MM
/// count 1-5
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Count until? ";
    cin >> n;
    int i = 0;
    while ( true ) {
        i++; /// or i = i + 1
        cout << i << endl;
        if (i > n) break;

    }
    return 0;
}//main

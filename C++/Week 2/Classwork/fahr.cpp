/// File week1/fahr.cpp MM
/// given fahrenheit find celsius
#include <iostream>
using namespace std;
int main() {
    float f; // temp in fahr
    float c; // temp in celsius
    for (int i=1; i <= 3; i++) {
        cout << i << ". Enter Fahrenheit?"; cin >> f;
        c = ((f - 32) * 5)/9 ;
        /// result
        cout << "temp in f=" << f << "\ttemp in Celsius=" << c << endl;
    }
    return 0;
}//main

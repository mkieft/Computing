///File: lab2/p16.cpp Maura Kieft
/// Ask for the coefficients a,b,c and solve the quadratic equation: ax^2 + bx + c = 0
#include <iostream>
using namespace std;
#include <cmath>
int main() {
    float a, b, c, d, x1, x2;
    cout << "This program solves the quadratic equation: ax^2 + bx + c =0 when you enter the coefficients for a, b, and c.";
    cout << "\nEnter coefficient for a, b, c : ";
    cin >> a >> b >> c;
    d= ( b*b) - (4 * a * c);
    if (d >= 0){
        x1= (-b + sqrt(d))/(2 * a);
        x2= (-b - sqrt (d))/(2 * a);
        cout << "\nThe roots of the quadratic equation are: " << x1 << " and " << x2;
    }
    else{
        d= d* (-1);
        cout << "\nRoots unavailable.";
    }

    return 0;
}//main


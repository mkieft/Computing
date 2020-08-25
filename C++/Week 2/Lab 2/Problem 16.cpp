///File: lab2/p15.cpp Maura Kieft
/// Display all pythagorean triplets with integers between 1 and 100.
#include <iostream>
using namespace std;
#include <cmath>
int main() {
    int a;
    int b;
    int c;
    cout << "Pythagorean triplets (not squared in examples): ";
    for (int a = 1; a < 101 ; a++ ){

            for (int b = 1 ; b < 101 ; b++){

                for (int c = 1; c < 101 ; c++){

                    if ((a*a)+(b*b) == (c*c) && c <= 100)
                        cout << "\n" << a << "+" << b << " = " << c;

                }//c for
            }//b for

    }//a for
    return 0;
}//main

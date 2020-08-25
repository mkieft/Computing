///File: lab2/p15.cpp Maura Kieft
/// Ask for an integer and display if it is or not a perfect square
#include <iostream>
using namespace std;
#include <cmath> // for square root
int main() {
    int n;
    cout << "Enter a number to determine if it is a perfect square: ";
    cin >> n;
    int a = (int) sqrt((double) n);
    if ((a*a) == n)
        cout << n << " is a perfect square!";
    else
        cout << n << " is not a perfect square.";


    return 0;
}//main

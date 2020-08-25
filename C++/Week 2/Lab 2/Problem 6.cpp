///File: lab2/p6.cpp Maura Kieft
///Ask for 3 integers. Display max and min.

#include <iostream>
using namespace std;
int main() {
    int max1 = 0
    float n1, n2, n3;
    cout << "Enter 3 numbers to find max and min: ";
    cin << n1 << n2 << n3;
    float mmax = n1;

    if (n2 > mmax)
        mmax= n2;
    if (n3 > mmax)
        mmax= n3;
    cout << "Max number is: " << mmax;


    float mmin= n1;
    if (n2 > mmin)
        mmin= n2;
    if (n3 > mmin)
        mmin= n3;
    cout << "Min number is: " << mmin;



    return 0;
}//main

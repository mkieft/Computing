///File: week2/factors.cpp MK
///find factors/divisors for an int
#include <iostream>
using namespace std;
int main() {
    int n;
    int k = 0; //counting variable
    cout << "\nEnter a number for n: ";
    cin >> n;
    for (int i = 2; i < n ; i++) {
         if (n % i == 0) {cout <<  i << "\t"; k++;}


    }//for loop
    cout << "Number of factors: " << k ;
    if (k==0) cout << n << " is prime";
    return 0;
}//main

///File: lab2/p3.cpp Maura Kieft
///Write a program to display all powers of 2 till n ( ask for n).

#include <iostream>
using namespace std;
#include <cmath> //for power
int mypower (float b, int p) ;
int main() {
    int n;
    cout << ("To compute powers of 2-- enter end number: ");
    cin >> n;
    for (int i = 1; i <n; i++){
        cout << "2 ^ " << i << " =" << pow(2,i) << endl;
    }


    return 0;
}//main
int mypower (float b, int p) {
    int r = 1;
    for (int i = 0; i < p; i++) {
            r=r*b;
    }
    return r;
}

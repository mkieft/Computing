///File: week2/starsFactors.cpp MK
///ask for int n and draw d (how many factors it has) stars
#include <iostream>
using namespace std;
void mystars (int n);
int main() {
    int n;//check for factors
    int k = 0; //counting variable
    cout << "Enter int n? ";
    cin >> n;
    for (int i = 2; i < n ; i++){
        if (n % i == 0) k++;

    }
    cout << "many factors=" << k << endl;
    mystars(k);
    return 0;
}//main
void mystars(int n) {
    for (int i=0; i < n ; i++){
        cout << "*";
    }
}

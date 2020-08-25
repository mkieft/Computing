///File: week2/starsIntss.cpp MK
///draw for all ints from 1-100 stars for how many factors
#include <iostream>
using namespace std;
void mystars (int n);
int main() {
    //check for fsctors for n
    for (int n = 1996; n <2080 ; n++) {
        int k = 0; //counting variable
        for (int i = 2; i < n ; i++){
            if (n % i == 0) k++;

        }//for1
        cout << endl << n << ":";
        mystars(k);
    }//for2
    return 0;
}//main
void mystars(int n) {
    for (int i=0; i < n ; i++){
        cout << "*";
    }
}

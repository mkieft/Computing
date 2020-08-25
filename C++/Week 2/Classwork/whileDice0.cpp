/// File: week2/whileDice0.cpp MM
/// roll die til first 6
#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib> // for random
int main() {
    srand(time(0));
    int d = 0; // die--initialize value to ensure nothing goes wrong
    int k = 0; //count variable
    while ( d != 6) {
        d = rand() % 6 + 1;// 1-6
        cout << d << "\t";
        k++; //increment count variable
    }//while loop
    cout << "tried= " << k;

    return 0;
}//main

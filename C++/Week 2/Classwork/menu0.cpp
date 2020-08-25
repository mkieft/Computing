/// File: week2/whileDice1.cpp MM
/// roll die til first 5 or 6
#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib> // for random
void game();
int main() {
    int option;
    srand(time(0));
    cout << "\nMenu: 1. Help\n"
        << "2. Game\n"
        << "0. Exit\n";
    cout << "Option? ";
    cin >> option;

    switch (option) {
        case 1: cout << " no help\n"; break;
        case 2: game(); break;
        case 0: cout << " Bye\n"; break;
        case 4: cout << " four\n"; break;
        default: cout << "bad input (0, 1, 2)";
    } //switch

    return 0;
}//main
void game () {
cout << rand() % 6 +1 << endl;
}

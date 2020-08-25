///File: lab2/p4.cpp Maura Kieft
///Produce 5 random upper case letters

#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib> //for rand()
int main() {
    srand(time(0));
    for (int i = 0; i < 5; i++){
        int X = 'A' + rand() % 26;
        cout << char (X) << "\t";
    }
    return 0;
}//main

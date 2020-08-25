///File: lab3/p7.cpp Maura Kieft
///Generate random letters till first Z

#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib> //for rand()
int main() {
    srand(time(0));
    int d;
    while ((int d) != 90 ){
        int d = 'A' + rand() % 26;
        cout << char (d) << "\t";
    }//while

    return 0;
}//main

///File: lab3/p8.cpp Maura Kieft
///Generate random letters till first Y X or Z

#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib> //for rand()
int main() {
    srand(time(0));
    char x = 'a';
    while (x != 'X' && x != 'Y' && x != 'Z'){
        x = char(rand() % 26 + int('A') );
        cout << x << "\t";
    } //while
    return 0;
}//main

///File: lab2/p5.cpp Maura Kieft
///Generate n random letters - count A's

#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib> //for rand()
int main() {
    srand(time(0));
    int n;
    cout << "Enter how many letter you want to randomly generate: "; cin >> n;
    int sum1 = 0;
    for (int i = 0; i < n; i++){
        int d = 'A' + rand() % 26;
        cout << char (d) << "\t";
        if (char (d) == 'A')
            sum1++;
    }
    cout << "\nOccurances of A's randomly generated: " << sum1;
    return 0;
}//main

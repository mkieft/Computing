///File: lab2/p2.cpp Maura Kieft
///Write a program to display all cubes 1-n ( ask for n).

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << ("Enter n: ");
    cin >> n;
    for (int i = 1 ; i < n ; i++){
        cout << "Number: " << i << " Cubed: " << i*i*i << "\n";



    }
    return 0;
}//main

///File: lab2/p12.cpp Maura Kieft
/// Dice. Roll a die n times and count how many times your got a 6 or a 1.

#include <iostream>
using namespace std;
#include <cstdlib> //for rand()
int main() {
    int n;
    int count1=0;
    int count6=0;
    cout << "How many times do you want to roll your dice? ";
    cin >> n;
    for (int i = 0 ; i < n ; i++) {//roll the die n times (as inputed by user)
            int d = (rand() % 6) + 1;
            cout << "Die roll: " << d << "\t";
            if (d==1)
                count1= count1+1; //counts number of times 1 appears
            if (d==6)
                count6= count6+1; //counts number of times 6 appears
    }
    cout << "\nTimes 1 was rolled: " << count1;
    cout << "\nTimes 6 was rolled: " << count6;
    return 0;
}//main

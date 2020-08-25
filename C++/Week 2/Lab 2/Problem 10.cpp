///File: lab2/p10.cpp Maura Kieft
///Roll a dice n times count how many times it was a 6.

#include <iostream>
using namespace std;
#include <cstdlib> //for rand()
int main() {
    int n;
    int count1=0;
    cout << "How many times do you want to roll your dice? ";
    cin >> n;
    for (int i = 0 ; i < n ; i++) {//roll the die n times (as inputed by user)
            int d = (rand() % 6) + 1; //make a die 0-5 +1
            if (d==6)
                count1=count1+1;
        cout << d <<"\t";
    }
    cout << "\n6 was rolled " << count1 << " times";
    return 0;
}//main

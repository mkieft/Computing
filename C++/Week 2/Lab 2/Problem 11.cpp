///File: lab2/p11.cpp Maura Kieft
/// Roll 2 dice n times and count how many times you got a double

#include <iostream>
using namespace std;
#include <cstdlib> //for rand()
int main() {
    int n;
    int count1=0;
    cout << "How many times do you want to roll your dice? ";
    cin >> n;
    for (int i = 0 ; i < n ; i++) {//roll the die n times (as inputed by user)
            int d = (rand() % 6) + 1;
            int c = (rand() % 6) + 1; //make a die 0-5 +1
            cout << "\nRolled: " << d << "\t" << c;
            if (d==c)
                count1=count1+1;
    }
    cout << "\n\nDoubles rolled: " << count1;
    cout << "\nGoodbye";
    return 0;
}//main

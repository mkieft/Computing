///File: lab2/p7.cpp Maura Kieft
///Find all the factors of a given integer and add them

#include <iostream>
using namespace std;
int main() {
    int n;
    int k=0; //count variable
    cout << "Enter number to find sum of factors: ";
    cin >> n;
    for (int i = 1; i < n ; i++){
        if (n % i==0) k=k+i;
    }
    cout << "Sum of Factors: " << k;




    return 0;
}//main

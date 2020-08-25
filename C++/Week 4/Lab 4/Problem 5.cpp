/// File: lab4/p5 MK
///Roll a die 10 times. Report frequency of each integer 1-6
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
    srand(time(0));
    int sum1=0, sum2=0,sum3=0,sum4=0,sum5=0,sum6=0;
    cout << "10 random die rolls\n";
    for (int i = 0 ; i < 10 ; i++){
        int numb=rand()%6+1;
        cout << numb;
        switch (numb){
        case 1: sum1++; break;
        case 2: sum2++; break;
        case 3: sum3++; break;
        case 4: sum4++; break;
        case 5: sum5++; break;
        case 6: sum6++; break;
        default: cout <<"Check program:";
        }//switch
    }//for
    cout <<" Occurance of 1: " <<sum1;
    cout << "\nOccurance of 2: " <<sum2;
    cout << "\nOccurance of 3: " << sum3;
    cout <<"\nOccurance of 4: " <<sum4;
    cout <<"\nOccurance of 5: " << sum5;
    cout << "\nOccurance of 6: " <<sum6;




}//main

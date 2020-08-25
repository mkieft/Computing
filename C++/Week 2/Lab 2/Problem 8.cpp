///File: lab2/p8.cpp Maura Kieft
///Contest. ***. Find perfect numbers. (look for "what is a perfect number?")

#include <iostream>
using namespace std;
int main() {
    int a=1001;
    int c;
    cout << "Perfect Number Table: \n";
    for (int n=1; n < a ; n++) {
        c=0;
        for (int i=1; i < n; i++) {
            if ( n % i == 0 ) c=c+i;
        }
        if (c==n)
            cout << n << "\t";
    }
    return 0;
}//main

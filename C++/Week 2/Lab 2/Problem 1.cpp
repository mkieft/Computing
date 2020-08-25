///File: lab2/p1.cpp Maura Kieft
///Display all the integers till n together with their square roots

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1 ; i < n ; i++){
        cout << "Number: " << i << " Square root: " << i*i << "\n";


}
    return 0;
}//main

/// File: week9/vectorlottery.cpp
///design lottery program (use factorial (n!)

#include <iostream>
#include <vector>
#include <algorithm> //for sort()
#include <ctime>
#include <cstdlib>
using namespace std;
void printV ( vector <string> V);
void readV (vector <string> &V);
int n = 5;
int main() {
    srand(time(0));
    vector <string> V;
    readV(V); printV(V);

    random_shuffle(V.begin(),V.end()); printV(V);

    return 0;
}//main
void readV (vector <string> &V){
    string w;
    for ( int i = 0 ; i < n ; i++){
        cout << "Enter name: ";
        cin >> w; //read put into w
        V.push_back(w);
    }//for

}//readV

void printV ( vector <string> V) {
    for (int i = 0 ; i < n ; i++){
        cout << V[i] << '\t';
    }//for
    cout << endl;
}//printV

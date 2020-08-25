/// File: week9/lab9/Problem2.cpp
///sorts the numbers then writes on screen

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm> // for sorting
#include <ctime>
void printV(vector <int> V);

main(){
    srand(time(0));
    vector <int> V;// declare vector -- no idea about size
    int n = 5;
    int r;
    for (int i = 0 ; i < n ; i++){
        r = rand() % 100;
        V.push_back(r);
    }//for
    cout << "Original vector: ";
    printV(V);

    cout << "Sorted vector: ";
    sort(V.begin(),V.end());
    printV(V);


    return 0;
}//main

void printV(vector <int> V){
    cout << "\n\n";
    for (int i =0; i < V.size(); i++){
        cout << V[i] << "\t";
    }//for
    cout << endl;
}//printV

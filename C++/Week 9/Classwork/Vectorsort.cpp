///File: week9/classwork/vector0.cpp MK
///vector - smart array v.size(), v.push_back, V.pop_back()

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm> // for sorting
#include <ctime>
void printV(vector <int> V);
main(){
    srand(time(0));
    vector <int> V;// declare vector -- no idea about size
    int n = 100;
    int r;
    for (int i = 0 ; i < n ; i++){
        r = rand() % 100;
        V.push_back(r);

    }


    printV(V);

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

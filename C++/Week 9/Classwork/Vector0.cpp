///File: week9/classwork/vector0.cpp MK
///vector - smart array v.size(), v.push_back, V.pop_back()

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm> // for sorting
void printV(vector <int> V);
main(){
    vector <int> V;// declare vector -- no idea about size
    V.push_back(7);
    V.push_back(8);
    V.push_back(9);
    cout << "My container: " << V.size()<< endl; //returns vectors size

    printV(V);
    V.push_back(10);
    printV(V);

    V.pop_back();
    V.pop_back();
    printV(V);

    int A[4] = { 13, 19, 17, 11};
    vector <int> M (A, A  + 4);
    cout << "Addresses: \t" << A << " and " << A+4;
    printV(M);

    sort(M.begin(),M.end());
    printV(M);
    return 0;
}//main

void printV(vector <int> V){
    cout << "\n\n";
    for (int i =0; i < V.size(); i++){
        cout << V[i] << "\t";
    }//for
    cout << endl;
}//printV

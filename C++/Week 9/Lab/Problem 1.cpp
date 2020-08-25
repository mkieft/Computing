/// File: week9/lab9/Problem1.cpp
///writes vector on the screen
#include <iostream>
#include <vector>
#include <algorithm> //for sort()
using namespace std;
void print( vector <int> V);
void read( vector <int> &V);
int main() {
 vector <int> V(5);
 read(V);
 print(V); cout << V.size();
 return 0;
}//main()
void read( vector <int> &V) {
    cout << "Enter integers for vector: ";
    for(int i=0; i < V.size() ; i++) {
        cin >> V[i];
    }
}
void print( vector <int> V){
    cout << "\nVector is:\n";
    for(int i=0; i < V.size(); i++ ){
      cout << V[i] << '\t';
 }
}

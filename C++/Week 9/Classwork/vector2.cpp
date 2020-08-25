/// File: week9/vector2.cpp
// vector of ints V.begin() V.end()
// print
#include <iostream>
#include <vector>
#include <algorithm> //for sort()
using namespace std;
void print( vector <int> V);
int main() {
 vector <int> V(5);
 V[0] = 4;  V[1] =3; V[2] =4; V[3] = 5; V[4]=5; print(V);
 cout << "\nFirst" << V[0] << "same as" << V.front();
 cout << "\nLast" << V[V.size()-1] << "same as" << V.back();
/// insert w=8 in pos=2
 int w=8;
 V.insert(V.begin()+2, w); print(V);
 V.erase(V.begin()+1);   print(V);
 V.erase(V.begin()+1);   print(V);
 if ( ! V.empty() ) cout <<"not empty";
 cout << "count no of 5: " << count(V.begin(),V.end(),5); //count 5s in V
 sort(V.begin(),V.end());   print(V);
 V.clear(); print(V); cout << V.size();
 return 0;
}//main()
void print( vector <int> V){
    cout << "\nVector is:\n";
    for(int i=0; i < V.size(); i++ ){
      cout << V[i] << '\t';
 }
}

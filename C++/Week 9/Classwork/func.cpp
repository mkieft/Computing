/// File: week9/funcc.cpp

#include <iostream>
using namespace std;
void modify(int x);
void modify2 (int &x );
int main() {
 int x = 5; cout << &x << endl; //address in memory 12ACE50F
 modify(x); // x + 1
 cout << "Call by value: " << x << endl;
 modify2(x);
 cout << "Call by reference: " << x << endl;

 int A [3] = { 3, 4, 5 };
 cout << A << endl;
 cout << &A[2];
 return 0;
}//main()
void modify2 (int &x ) {//call by reference
    x = x + 1;

}//modify2
void modify(int x){ // call by value
    x = x + 1;

}//modify

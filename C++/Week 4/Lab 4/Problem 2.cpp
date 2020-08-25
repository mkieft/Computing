///File: lab 4/p2 MK
///Check palindrome
#include <iostream>
using namespace std;
const int n=5;  //declare size as GLOBAL variable
void printArray(int A [] );
void makeArrayRev(int A[],int B[] );
bool compareArrays(int A[],int B[]);
bool checkPalin( int B[],int n ) ;
int main () {
	int A[n] = {13,24,15,24,13};
	printArray(A);
	int B[n];  // produce B {9,4,5,4,3};
	makeArrayRev(A,B);
	printArray(B);
	if ( compareArrays(A,B) )
        cout << "\nIt is a Palindrome";
	else
        cout << "\nNot a palindrome";
        //Method 2 - check without producing another array
    if ( checkPalin(A,n))
        cout << "\nA palindrome!\n";
	else
        cout << "\nNot a palindrome\n";
	return 0;
}/// main
bool checkPalin( int B[],int n ) {
	for (int i=0 ; i < n ; i++) {
		if ( B[i] != B[n-i-1]) return false;
	}
	return true;
}/// check Palindrome
bool compareArrays(int A[],int B[]) { // A == B
    for(int i=0 ; i < n ; i++) {
        if ( A[i] != B[i] ) return false;
    }
    return true;
}//
void printArray (int A[]) {
	for (int i=0; i < n ; i++) {
		cout << " " << A[i] ;
	}
	cout << endl;
}// make B[] given A[] B[] is reversed
void makeArrayRev (int A[], int B[]) {
	for (int i = 1; i <= n ; i++) {
		B[i-1] =  A[n-i] ;
	}
}

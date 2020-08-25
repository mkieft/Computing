///File: Classwork4/array1.cpp

#include <iostream>
using namespace std;
int main() {
const int SIZE=10;
float A[SIZE];
int n;
cout << "enter size: "; cin >> n;
readArray(A, n);    printArray(A, n);

return 0;
}
void printArray (float A[], int n) {
cout << "how many bytes for a float?" << sizeof(float) << endl;
cout << "A=" << A << endl;
for int(i = 0; i< n; i++) {
    cout << &A[i] << '\t' << A[i] << '\n'; //& means that this is where it is in memory
}

}
void readArray (float A[], int n) {
    for (int i = 0; i < n; i++){
        cout << "A[" << i << "] = ?";
        cin >> A[i];
    }//for
}//readArray

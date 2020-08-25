///File week1/fahr.cpp MK
///given fahrenheit find celsius
#include <iostream>
using namespace std;
int main() {
    float f; //temp in fahr
    float c; //temp in celsius
    for (int i=1; i <=3; i++){
        cout << i << ". Enter fahrenheit? "; cin >> f ;
        c= ((f-32)*5)/9 ;
        //result
        cout << "temp in f=" << f << "temp in celsius=" << c << endl;
    }
    return 0;
}//main

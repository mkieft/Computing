///File: week10/classwork/OOPoint.cpp
/// Object oriented programming

#include <iostream>
using namespace std;
struct point {
    int x;
    int y;
    void print() { cout << '[' << x << ',' << y << ']' << endl;;}
    bool eqPoint(point Q) { return (x == Q.x && y == Q.y); }

};
int main(){
    point P;       //declare
    P.x = 10;
    P.y = 20;
    P.print();

    P.x = 25;
    P.print();

    point Q;
    Q.x = 25;
    Q.y = 20;
    Q.print();

    cout << "Q and P are the same! " << P.eqPoint(Q) << endl;

    return 0;
}//main

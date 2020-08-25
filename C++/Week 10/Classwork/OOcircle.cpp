///File: week10/classwork/OOcircle.cpp
/// Object oriented programming

#include <iostream>
using namespace std;
struct point{  //[x,y]
    int x;
    int y;
    void print () { cout << '[' << x << "," << y << ']' << endl;}

};//point
struct circle{
    point Center;
    float radius;
    void print () { Center.print();
                    cout << "Radius: " << radius;}

};//circle
int main(){
    circle C;   //declare
    C.Center.x = 30;
    C.Center.y = 50;
    C.radius = 100;
    C.print();


    return 0;
}//main

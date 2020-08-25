///File: week10/classwork/OOTime.cpp
/// Object oriented programming

#include <iostream>
using namespace std;
struct mytime {
    int hour;
    int minute;
    int sec;
    void print () {cout << hour << ":" << minute << ":" << sec << endl;}
    bool mybreak() {if (hour == 9 && minute == 20)
                            return true;
                        else
                            return false;}
};

int main(){
    mytime T;       //declare
    T.hour = 10;
    T.minute = 30;
    T.sec = 00;     //initialize
    T.print();      //print
    cout << "Break time? " << T.mybreak();

    return 0;
}//main

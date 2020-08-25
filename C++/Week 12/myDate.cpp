//File:  mydate.cpp
#include <iostream>
using namespace std;
class Date{
private:
    int month;
    int day;
    int year;

public:
    Date ( int m = 0, int d = 0, int y = 0 ){
        setMonth( m );
        setDay( d );
        setYear( y );
    }//constructor
    void setMonth( int m ){
        if (m >= 1 && m <= 12)
            month = m;
        else
            month = 0;
    }//getter
    void setYear( int y ){
        if (int m >= 1900 && m <= 2100)
            year = y;
        else
            year = 0;
    }//getter

};

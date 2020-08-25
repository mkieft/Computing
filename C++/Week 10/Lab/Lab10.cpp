///File: week10/lab.cpp
///One object. Make Object Time (H:M:S) with struct(take the one we did in class) then same program using class (public:)
///One object. Date as a class ( Print it like this: Month/day/year)
///One object. Address as a an object (use class). (Has street, number(int), city, state). Read from a file called address.txt some addresses and put them in a vector and print. Print all addresses from a certain city.
///FRIENDS. Project (this is your first database example)

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class mytime {  //#1
public:
    int hour;
    int minute;
    int sec;
    void print () {cout << hour << ":" << minute << ":" << sec << endl;}
};
class mydate{   //#2
public:
    int month;
    int day;
    int year;
    void print () { cout << month << "\\" << day << "\\" << year << endl;}
};
class myaddress{    //#3
public:
    int numb;
    string street;
    string city;
    string state;
    void print () {cout << numb << " " << street << " " << city << ", " << state <<endl;}
};
void printV( vector <myaddress> A);
void stateFind (vector <myaddress> A);
main(){
    mytime T;       //declare
    T.hour = 10;
    T.minute = 30;
    T.sec = 00;     //initialize
    T.print();      //print

    mydate B;
    B.month = 3;
    B.day = 22;
    B.year = 2017;
    B.print();

    vector <myaddress> A;
    int n; //for number
    string s; //for street
    string c;   //for city
    string t;   //for state

    ifstream fin ("address.txt");
    if (!fin)
        cout << "File not found.";
    while (!fin.eof()){
        fin >> n >> s >> c >> t;
        myaddress S;
        S.numb = n;
        S.street = s;
        S.city = c;
        S.state = t;
        A.push_back(S);
    }//while

    printV(A);
    stateFind(A);
    return 0;
}//main

void printV( vector <myaddress> A){
    for (int i = 0 ; i < A.size() ; i++){
        A[i].print();       //to print the student

    }//for
    cout << endl;
}//printarray
void stateFind (vector <myaddress> A){
    string w;
    cout << "Enter states to print: ";
    cin >>w;
    for (int i = 0; i < A.size() ; i++){
        if (A[i].state == w){A[i].print(); cout << "\n";}
    }
}//state find

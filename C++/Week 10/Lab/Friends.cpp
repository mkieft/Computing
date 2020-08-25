///File: week10/lab10/friends.cpp
///Write a Person with DOB (date of birth). Person has: name, month, day , year
///Put more persons in a vector.
///Read from a file friends with name (just first) AND date of birth: John 3 12 2019 || Ann 2 29 1999 || .. ((if loop S[i].month == S[i].month
///Ask for a friend (prints friend).
///Print all friends born on a certain day or month (or both).
///Organize your program with a menu. Imagine more questions.

#include <vector>
#include <iostream>
#include <fstream> // for working with files
#include <algorithm> // find(), erase(), sort()
using namespace std;
class Friend{
public:
    string name;
    int month;
    int day;
    int year;
    Friend(nn= "noname", int m = 0, int d = 0, int yr = 0000){nn = name; m= month; d =day; yr = year;}
    void print(){cout << name << "\t" << month << "/" << day << "/" << year << endl;}
};
void readFile (vector <Friend> &V, ifstream &fin);
void printVector (vector <Friend> V);
int main(){
    string fname; //for file
    vector <Friend> V;

    cout << "Enter file name (friends.txt): "; cin >> fname;
    ifstream fin (fname.data());
    if (!fin) {cout << "File not found."; return -1;}
    readFile(V,fin);
    printVector(V);


    return 0;
}//main

void printVector (vector <Friend> V){
    for (int i = 0 ; i < V.size(); i ++){
        V[i].print();                   //call print from the class

    }//for

}//printV
void readFile (vector <Friend> &V, ifstream &fin){      //go by address
    string nn;

    int yy;
    while (!fin.eof()){
        fin >> nn >> m >> d >>yr;
        Student X(nn,m,d,yr)
        V.push_back(X);
    }//while

}//readFile

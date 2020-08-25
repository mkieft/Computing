///File: week10/classwork/Stud0.cpp
/// Object oriented programming

#include <iostream>
using namespace std;
struct student {
    string name;
    int yog;
    void print() { cout << name << '\t' << yog << endl;}
};
void printArray( student A[], int n);
main(){
    student M;
    M.name = "Maura";   //initialize
    M.yog = 2019;
    M.print();          //print the student

    int n = 3;
    string s;    //name from user
    int y;      //yog from user
    student A[n];
    for ( int i = 0; i < n; i++){           //input from user
        cout << "Enter name: "; cin >> s;
        cout << "Enter graduation year: "; cin >> y;
        cout << endl;
        A[i].name = s;
        A[i].yog = y;

    }//for
    printArray(A,n);

    return 0;
}//main
void printArray( student A[], int n){
    for (int i = 0 ; i < n ; i++){
        A[i].print();       //to print the student

    }//for
}//printarray

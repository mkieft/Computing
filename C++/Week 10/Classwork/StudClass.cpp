///File: week10/classwork/StudClass.cpp
/// Object oriented programming

#include <iostream>
#include <vector>
using namespace std;
class student {   //use class instead of struct
public:             //has two sections: public and private
    string name;
    int yog;
    void print() { cout << name << '\t' << yog << endl;}
};
void printA( vector <student> A);
main(){
    vector <student> A;
    student S;

    for ( int i = 0; i < 3; i++){           //input from user
        cout << "Enter name: "; cin >> S.name;
        cout << "Enter graduation year: "; cin >> S.yog;
        cout << endl;
        A.push_back(S);

    }//for
    printA(A);
    A.erase(A.begin()+1); //erase the second student
    printA(A);

    return 0;
}//main
void printA( vector <student> A){
    for (int i = 0 ; i < A.size() ; i++){
        A[i].print();       //to print the student

    }//for
    cout << endl;
}//printarray

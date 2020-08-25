///File: week10/classwork/StudFile.cpp
/// Object oriented programming

#include <iostream>
#include <vector>
#include <fstream>
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
    string s;
    int y;

    ifstream fin ("students.txt");  //enter data from students.txt
    if (!fin)
        cout << "Not found.";
    while (!fin.eof()){
        fin >> s >> y;
        student S;
        S.name = s;
        S.yog = y;
        A.push_back(S);
    }//while
    printA(A);

    return 0;
}//main
void printA( vector <student> A){
    for (int i = 0 ; i < A.size() ; i++){
        A[i].print();       //to print the student

    }//for
    cout << endl;
}//printarray

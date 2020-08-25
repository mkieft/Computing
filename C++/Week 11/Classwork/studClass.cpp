///File: week11/studClass.cpp
///names.txt while have the row || Kiana 2019
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm> //sort()
using namespace std;
class Student {
    public:
    string name;
    int yog;
    Student(string nn = "noname", int aa = 0 ) { name = nn; yog = aa;} //constructor
    void print() {cout << name << '\t' << yog << endl;}
    bool eqStudent(Student Q) {return (name == Q.name ); }
};

void readFile (vector <Student> &V, ifstream &fin);
void printVector (vector <Student> V );
bool cmpName(Student X, Student Y);
bool cmpYog (Student X, Student Y);
int main(){
    string fname;
    vector <Student> V;

    cout << "Enter file name (data.txt): "; cin >> fname;
    ifstream fin (fname.data());
    if (!fin) {cout << "File not found."; return -1;}
    readFile(V,fin);
    printVector(V);


    sort(V.begin(), V.end(),cmpName); cout << "Sorted by name \n"; printVector(V);
    sort(V.begin(), V.end(), cmpYog); cout << "Sorted by age \n"; printVector(V);    //sort by age
    fin.close();
    return 0;
}//main
bool cmpName(Student X, Student Y){  //X < Y if X.name < Y.name
    return (X.name < Y.name);

}//cmpName
bool cmpYog (Student X, Student Y){
    return (X.yog < Y.yog);

}//cmpAge
void sortV(vector<Student>V){
    cout << "Sorted Vector: ";
    sort(V.begin(),V.end());
    printVector(V);

}//sortV

void printVector (vector <Student> V){
    for (int i = 0 ; i < V.size(); i ++){
        V[i].print();                   //call print from the class

    }//for

}//printV
void readFile (vector <Student> &V, ifstream &fin){      //go by address
    string nn;
    int yy;
    while (!fin.eof()){
        fin >> nn >> yy;
        Student X(nn, yy);
        V.push_back(X);
    }//while

}//readFile

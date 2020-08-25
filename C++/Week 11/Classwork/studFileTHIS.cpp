/// File: week11/studFileOUT.cpp
/// names.txt : Kiana 2019 || Maura 2013 ...
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm> // sort()
using namespace std;
class Student {
public:
  string name;
  int yog;
  Student(string name="noname", int yog=0 ){
    this -> name = name;
    this -> yog = yog;
  }//this
  void print() { cout << name << '\t' << yog << endl;}
  bool eqStudent(Student Q) { return ( name ==Q.name ); }
};
void printVector( vector <Student> V);
void readFile(vector <Student> &V, ifstream &fin);
bool cmpName(Student X, Student Y);
void myreport(vector <Student> V, string filename);
void myreport2(vector <Student> V, string filename);
int main() {
    vector <Student> V;
    string fname;

    cout << "Enter file name (data.txt)?"; cin >> fname;
    ifstream fin (fname.data()) ;
    if ( !fin) { cout << "not found"; return -1;}

    readFile(V,fin);
    printVector(V);

    sort(V.begin(),V.end(),cmpName); printVector(V);

    fin.close();
    myreport(V, "data.txt");
    myreport2(V, "data.txt");
    return 0;
}//main
void myreport2(vector <Student> V, string filename){
    ofstream fout (filename.data());
    for ( int i = 0 ; i << V.size()-1; i++){
            if ( V[i].eqStudent(V[i+1])){
            fout << V[i].name << '\t' << V[i].yog <<endl;

                fout << V[i].name << '\t' << V[i].yog << endl;
                V[i].print(); //test
            }//for
    }//for
    int n = V.size()-1;
    fout << V[n].name << '\t' << V[n].yog << endl;
    fout.close();
}//myreport2
void myreport(vector <Student> V, string filename){
    ofstream fout (filename.data());
    for ( int i = 0 ; i << V.size()-1; i++){
        fout << V[i].name << '\t' << V[i].yog <<endl;
            if (V[i].name != V[i+1].name ){ //not equal then print
                fout << V[i].name << '\t' << V[i].yog << endl;
                V[i].print(); //test
            }//for
    }//for
    int n = V.size()-1;
    fout << V[n].name << '\t' << V[n].yog << endl;
    fout.close();
}//myreport
bool cmpName(Student X, Student Y){  /// X < Y
    return (X.name < Y.name);
}
void readFile(vector <Student> &V, ifstream &fin) {
    string name; int yog;
    while ( ! fin.eof() ) {
        fin >> name >> yog;
        Student X(name,yog);
        V.push_back(X);
    }
}//readfile
void printVector( vector <Student> V) {
    for (int i=0; i < V.size() ; i++) {
        V[i].print();
    }
    cout << "\n";
}//printvector


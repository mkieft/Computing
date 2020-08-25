///File: week10/classwork/myperson.cpp
/// Object oriented programming

#include <iostream>
using namespace std;
#include <fstream>
#include <vector>
#include <algorithm>
class Person{
public:
    string name;
    int age;

    Person (string nn= "NoName", int a= 0 ) {name = nn; age = a;}    //constructor
    void print() { cout << name << "\t" << age << endl;}
};
void printV(vector <Person> V);
bool cmpName(Person P, Person Q);
bool cmpAge (Person P, Person Q);
int main(){
    ///Person M("Maura", 21); M.print();   //person  Person X; X.print(); //empty default

    ifstream fin ("data.txt");
    if ( !fin ) {cout << "File data.txt not found!";
                return -1;}
    vector <Person> V;
    string s; //for name
    int a; //for age
    while (!fin.eof()){
        fin >> s >> a;
        Person P(s,a); //object made
        V.push_back(P);
    }//while

    printV(V);
    sort(V.begin(), V.end(),cmpName); cout << "Sorted by name \n"; printV(V); //sort by name
    sort(V.begin(), V.end(), cmpAge); cout << "Sorted by age \n"; printV(V);    //sort by age
    return 0;
}//main
bool cmpAge (Person P, Person Q){
    return (P.age < Q.age);

}//cmpAge
bool cmpName(Person P, Person Q){  ///P < Q if P.name < Q.name
    return (P.name < Q.name);

}//cmpName
void printV(vector <Person> V){
    cout << "Vector is: \n";
    for (int i = 0; i < V.size(); i++){
        V[i].print();

    }//for
    cout << "\n";
}//print V

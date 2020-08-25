//File: personProject/Person.h
#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
class Person{
public:
    string name; int yog;
    Person ( string name = "NO", int yog = 0 ) { //constructor
        this -> name = name;        //global
        this -> yog =yog;
    }
    void print (){cout << name << "\t" << yog << endl;}
};


#endif // HEADER_H_INCLUDED

//File: personProject/Person.h
#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
class Person{
private:
    string name;
    int yog;
public:

    Person ( string name = "NO", int yog = 0 ) { //constructor
        this -> name = name;        //global
        setYog(yog);
    }//setter
    void setName (string name ) {
        this-> name = name;}       //setter
    string getName(){
        return name;}  //getter

    void setYog(int yog = 0) { //yog has to be > 1990
        if (yog > 1990)
            this -> yog = yog;
        else
            this -> yog = 0;
                                        //getters (usually returning something)
        int getYog() {return yog;}
    void print (){cout << name << "\t" << yog << endl;}
};


#endif // HEADER_H_INCLUDED

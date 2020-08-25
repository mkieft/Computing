//File: personProject/main.cpp

#include <iostream>
using namespace std;
#include "person.h"
int main()
{
    Person X("Jane", 2000);
    X.print();
    cout << "Hello world!" << endl;
    X.setYog (2010);
    X.print();

    cout << X.getYog(); //2010

    if (X.getName() == "jane" )
        X.setName("Jane");
    return 0;
}//main

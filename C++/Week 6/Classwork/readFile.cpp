///File: week6/classwork/readFile.cpp MK
///make a file called ints.txt with ints from 1 to 10
#include <iostream>
#include <fstream> // for working with files
using namespace std;
main(){
    int x;
    ifstream fin ("ints.txt");

    if (! fin) { cout << "File not found!\n" ;
                    return -1; //error
                }//if

    while (! fin.eof() ) {
        fin >> x; //read from file
        cout << x << "\t"; //write variable on the screen
    }//while

    fin.close();

    return 0;
}//main

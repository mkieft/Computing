///File: week6/lab6/Problem6.cpp MK
///Read 2 files jan.txt and feb.txt with expenses and put all the information in just one file called expenses.txt.

#include <iostream>
#include <fstream> // for working with files
using namespace std;

main(){

    float x;
    ofstream fout ("expenses.txt"); //variable that is a file
    ifstream fin ("jan.txt");

    if (! fin) { cout << "File not found!\n" ;
                    return -1; //error
                }//if

    while (! fin.eof() ) {
        fin >> x; //read from file
        cout << x << "\n"; //write variable on the screen
        fout << endl << x; //write in the file
    }//while
    ifstream fin2 ("feb.txt");

    if (! fin2) { cout << "File not found!\n" ;
                    return -1; //error
                }//if

    while (! fin2.eof() ) {
        fin2 >> x; //read from file
        cout << x << "\n"; //write variable on the screen
        fout << endl << x; //write in the file
    }//while




    fin.close();
    fin2.close();
    fout.close();

    return 0;
}//main


///File: week6/classwork/readFileAsk.cpp MK
///read file from users input
#include <iostream>
#include <fstream> // for working with files
using namespace std;
main(){
    string filename;
    cout << "Enter file name? (ints.txt) "; //user enters filename
    cin >> filename;
    ifstream fin (filename.data()); //takes input from user
    int x; //element read from file
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

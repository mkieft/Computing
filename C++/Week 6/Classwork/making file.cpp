///File: week6/classwork/makeFile.cpp MK
///make a file called ints.txt with ints from 1 to 10
#include <iostream>
#include <fstream> // for working with files
using namespace std;
main(){
    ofstream fout ("ints.txt"); //variable that is a file
    for ( int i = 1; i <= 1000; i ++){
        cout << i << "\n"; //print to see how the file should look
        fout << endl << i; //write in the file

    }//for
    fout.close();
    return 0;
}//main

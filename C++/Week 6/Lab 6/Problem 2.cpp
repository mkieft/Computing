///File: week6/lab6/Problem2.cpp MK
///Write numbers from the user in a file (myints.txt) from the user. Stop when user inputs 0.
#include <iostream>
#include <fstream> // for working with files
#include <cstdlib>
using namespace std;
main(){
    int ans;
    ofstream fout ("myints.txt"); //variable that is a file

    while (ans != 0){
        cout << "Enter numbers to put in text file ints.txt (Enter 0 to stop): "; cin >> ans;
        fout << endl << ans; //write in the file

    }//while

    fout.close();
    return 0;
}//main

///File: week6/lab6/Problem1.cpp MK
///WRITE in a file: myints.txt, N random integers between 0 and 100.
///Ask for N
#include <iostream>
#include <fstream> // for working with files
#include <cstdlib>
using namespace std;
main(){
    int n;
    int x;
    cout << "Enter how many random integers you want: "; cin>> n;

    ofstream fout ("myints.txt"); //variable that is a file
    for ( int i = 0; i < n; i ++){
        x = rand() % 100 + 1 ; //for random 1-100
        cout << x << "\n"; //print to see how the file should look
        fout << endl << x; //write in the file

    }//for
    fout.close();
    return 0;
}//main

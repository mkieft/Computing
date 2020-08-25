///File: week6/lab6/Problem7.cpp MK
///Read a matrix from a file (the magic square 4 x 4 see Melancholia- Durer ) and print it NICE on the screen.

#include <iostream>
#include <fstream> // for working with files
using namespace std;
const int n = 4;
void printMatrix(int M[n][n]);
main(){

    int a,b;
    int M[n][n];
    ifstream fin ("matrix.txt");

    if (! fin) { cout << "File not found!\n" ;
                    return -1; //error
                }//if

    while (! fin.eof() ) {

        for ( int a = 0 ; a < n ; a++){
            for ( int b = 0; b < n; b++){
                fin >> M[a][b];

            }
        }

    }//while

    printMatrix(M);
    fin.close();

    return 0;
}//main
void printMatrix(int M[][n]){
    cout << "\n\nMatrix: \n";
    for (int a = 0 ; a < n ; a++){  //row
        for ( int b = 0 ; b < n ; b++){
            cout << M[a][b] << "\t";
        }//for 2
        cout << endl;
    }//for
}//print

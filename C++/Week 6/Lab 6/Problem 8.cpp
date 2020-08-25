///File: week6/lab6/Problem8.cpp MK
///Read a Sudoku board from a file.

#include <iostream>
#include <fstream> // for working with files
using namespace std;
const int n = 9;
void printMatrix(int M[n][n]);
main(){

    int a,b;
    int M[n][n];
    ifstream fin ("sudoku.txt");

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
    cout << "\n\nSudoku: \n";
    for (int a = 0 ; a < n ; a++){  //row
        for ( int b = 0 ; b < n ; b++){
            cout << M[a][b] << "\t";
        }//for 2
        cout << endl;
    }//for
}//print

///File: week6/lab6/Problem5.cpp MK
///SELECT from file myints.txt only even integers between 10 and 50, into another file called selected.txt.

#include <iostream>
using namespace std;
#include <fstream>
int main() {
	ifstream fin ("myints.txt");
	int x;

	if (! fin ) {
		cout << "File myints.txt not found\n";
	    return -1;  // Exit program Error
	}//if


	cout << "Even integers from myints.txt between 10 and 50: \n\n";

    while ( !fin.eof() ) {
	    fin >> x; //read from file

        if (x % 2 == 0 && x > 10 && x < 50) //prints only even integers
            cout << x << "\t"; //write variable on the screen

    }//while

    fin.close();

    return 0;
}//main

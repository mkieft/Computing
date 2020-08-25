///File: week6/lab6/Problem3.cpp MK
///PRINT on the screen file: myints.txt
#include <iostream>
using namespace std;
#include <fstream>
int main() {
	ifstream fin ("myints.txt");
	int x;
	if (! fin ) {
		cout << "File myints.txt not found\n";
	    return -1;  // Exit program Error
	}
	cout << "\nRead from File: myints.txt\n";
    while ( !fin.eof() ) {
	   fin >> x;
	   cout << x << endl;	// print
	}
    fin.close();   // close file
	cout << "\n\nFinished reading file\n";
   return 0;
}

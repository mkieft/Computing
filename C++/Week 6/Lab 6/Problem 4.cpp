///File: week6/lab6/Problem3.cpp MK
///ADD all ints from file myints.txt and report how many numbers are in myints.txt

#include <iostream>
using namespace std;
#include <fstream>
int main() {
	ifstream fin ("myints.txt");
	int x;
	int sum = 0;
	int count1 = 0;
	if (! fin ) {
		cout << "File myints.txt not found\n";
	    return -1;  // Exit program Error
	}//if


	cout << "\nRead from File: myints.txt\n";
    while ( !fin.eof() ) {
	    fin >> x; //read from file

        cout << x << "\t"; //write variable on the screen
        sum = sum + x; //generates running sum from file
        count1 = count1 + 1;
    }//while

    fin.close();
    cout << "\n\nSum: "<< sum << endl;
    cout << "Numbers in file: " << count1 << endl;
    return 0;
}//main

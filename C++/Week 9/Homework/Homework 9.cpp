/// File: week9/homework9.cpp
///Vector of names. You will have prepared a file with names (only first names).
///After you read the names from the text file names.txt. Print a menu. See below.
///1. print names
///2. add a name (push_back)
///3. delete last name (pop_back  (check if not empty)
///4. who is last? back (check if not empty)
///5. (who is first? front (check if not empty)
///6. erase a name (ask for name)
///7. find a name (ask for name)
///8. insert a name in a certain position
///9. sort


#include <vector>
#include <iostream>
#include <fstream> // for working with files
#include <algorithm> // find(), erase()
using namespace std;
void printV(vector <string> V);
void addName(vector <string> V);
void deleteV(vector <string> V);
void lastV(vector <string> V);
void firstV(vector <string> V);
void eraseV( vector <string> V);
void findV(vector <string>V);
void insertV(vector<string>V);
void sortV(vector<string>V);
int main() {
    string x;
    vector <string> V;
    ifstream fin ("names1.txt");

    if (! fin) { cout << "File not found!\n" ;
                    return -1; //error
                }//if

    while (! fin.eof() ) {
        fin >> x; //read from file
        cout << x << "\t"; //write variable on the screen
        V.push_back(x);
    }//while
        int ans = 1; //user's option to answer
    while ( ans != 0 ) {
        cout << "\n\nHomework #9 by Maura Kieft\n\n"
            << "1. Print Names\n"
            << "2. Add a Name\n"
            << "3. Delete Last Name\n"
            << "4. Who is Last?\n"
            << "5. Who is First?\n"
            << "6. Erase a name\n"
            << "7. Find a name\n"
            << "8. Insert a name into a certain position\n"
            << "9. Sort\n"
            << "0.Exit\n";
        cout << "Enter option? " ;
        cin >> ans;
        cout << "\n\n";
        switch (ans){
            case 1:  printV(V);   break; // #1 prints names
            case 2: addName(V);   break; //#2 adds name to vector
            case 3: deleteV(V);   break; //#3 deletes last name
            case 4: lastV(V);     break; //checks who is last in the list
            case 5: firstV(V);    break; // #5 checks who is first in the list
            case 6: eraseV(V);    break; //erases users name
            case 7: findV(V);     break; //finds users name
            case 8: insertV(V);   break; //insert name from user
            case 9:sortV(V);      break; //sorts names A-Z

            case 0: cout << "Goodbye :)";          break;
            default: cout << "Bad input";

        }//switch
    }//while
    return 0;
}//main
void printV(vector <string> V){
    cout << "\n\n";
    for (int i =0; i < V.size(); i++){
        cout << V[i] << "\t";
    }//for
    cout << endl;
}//printV

void addName(vector <string> V){
    string w;
        cout << "\nEnter name to add to list: ";
        cin >> w; //read put into w
        V.push_back(w);
        printV(V);

}//addname
void deleteV(vector <string> V){
    V.pop_back(); //deletes last name from original vector
    printV(V);

}//deleteV
void lastV(vector <string> V){
    cout << "\n\nLast name in vector: \t";
    cout << V.back();
}//lastV
void firstV(vector <string> V){
    cout << "\nFirst name in the vector: \t";
    cout << V.front();

}//firstV
void eraseV( vector <string> V){
    string w;
    cout << "\nEnter name to erase from vector: ";
    cin >> w;
    if ( find(V.begin(),V.end(),w) != V.end() ) {

            V.erase(find(V.begin(),V.end(),w));  //erase the location
    }
    else
        cout << "not found";
    cout << "New Vector: \n";
    printV(V);
}//erase V
void findV(vector <string>V){
    string w;
    cout << "\nEnter name to find in vector: ";
    cin >> w;
    if ( find(V.begin(),V.end(),w) != V.end() ) {
            cout << "Found " << w << endl;
            V.erase(find(V.begin(),V.end(),w));  //erase the location
    }
    else
        cout << "not found";

}//find V
void insertV(vector<string>V){
    string w;
    int y;
    cout << "Enter a name to insert into vector: "; cin >> w;
    cout << "What position do you want it to be inserted?"; cin >> y;
    V.insert(V.begin() + (y-1) , w);
    printV(V);

}//insertV
void sortV(vector<string>V){
    cout << "Sorted Vector: ";
    sort(V.begin(),V.end());
    printV(V);

}//sortV


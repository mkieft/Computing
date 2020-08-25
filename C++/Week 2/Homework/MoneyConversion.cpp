///File week2/Homework/MoneyConversion.cpp MK
///Write a program for money conversion.

#include <iostream>
using namespace std;
void dollarEuro();
void euroDollar ();
void usCan();
int main() {
    int ans = 1;
    while ( ans != 0){
        cout << "\n\nMoney Conversion Menu.\n 1. Author\n"
            << "2.Dollar => Euro\n"
            << "3.Euro => Dollar\n"
            << "4.$ US => Canadian $\n"
            << "0. Exit\n";
        cout << "Enter Option: "; cin >> ans;

        switch (ans){
            case 1: cout << "Maura Kieft"; break;
            case 2: dollarEuro(); break;
            case 3: euroDollar (); break;
            case 4: usCan(); break;
            case 0: cout << "Bye"; break;
            default: "Bad input";


        }//switch





    }//while

    return 0;
}//main
void dollarEuro(){
    int d;

    cout << "Enter dollar amount to convert to euros: "; cin >> d;
    int e = d * .93;
    cout << "Dollar to euro conversion: " << e << " euros.";

}//dollarEuro
void euroDollar (){
    int e;
    cout << "Enter euro amount to convert to dollars: "; cin >> e;
    int d = e * 1.08;
    cout << "Euro to dollar conversion: " << d << " dollars.";

}//euroDollar

void usCan() {
    int u; // us dollars
    cout << "Enter US $ to convert to Canadian $: "; cin >> u;
    int c = u * 1.31;
    cout << "US $ to Canadian $ conversion: " << c << " Canadian $.";

}//usCan

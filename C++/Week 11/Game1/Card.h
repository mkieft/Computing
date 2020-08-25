//File: Week 11/Game/main.cpp
#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
string FACE = "2345678910JQKA"; //13
class Card{
public:
    char face; //2,3,4,5,6,7,8,9,10,J,Q,K,A
    int suit; //ASCII code H(3) D(4) C(5) S (6)
    Card () {
        face = FACE[rand()%13]; //0-12
        suit = rand() % 4 +3; //3,4,5,6
    } //constructor
    void print (){ cout << face << char (suit) << endl;}
};

#endif // CARD_H_INCLUDED

#Lab 10 Q 2
#Write a program that uses two lists and randomly generates a playing card

import random

def main():

    suits=['CLUB','DIAMONDS','HEART','SPADE']
    values=['A','2','3','4','5','6','7','8','9','T','J','Q','K']

    x=random.choice(suits)
    y=random.choice(values)
    print("Random card drawn from the deck is ",y," of ",x)



main() 

#Lab 5 Q 7
#Maura Kieft
#9/29/2016
#7.	Write a program that simulates 20 rolls of a dice and prints all the number on the face of the dice except when the dice shows 3

import random

def main():
    for x in range (20):
        x=random.randrange(1,7)
        if (x==3):
            continue
        print(x)

main()

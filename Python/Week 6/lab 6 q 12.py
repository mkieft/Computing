#Lab 6 Q 12
#Maura Kieft
#10/6/2016
#12.	Write a program that simulates 100 rolls of a dice and prints all the number on the face of the dice except when the dice shows 3

import random

def main():
    for x in range(100):
        
        x=random.randrange(1,7)

        if (x!=3):
            print(x)
    
main()

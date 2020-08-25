#Lab 6 Q 13
#Maura Kieft
#10/6/2016
#13.	Write a program that simulates 100 rolls of two dice

import random

def main():
    i=0
    d=0
    while (i<100):
        x=random.randrange(1,7)
        y=random.randrange(1,7)
        i=i+1
        if (x==y):
            d=d+1
            print("Double: ",x,y)
            
        if d>4:
            print("There's more than four doubles")
            break
            

main()

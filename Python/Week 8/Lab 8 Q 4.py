#Lab 8 Q 4
#Maura Kieft
#10/20/2016
#4.	Write and test a function that takes as input two integers and prints a random integer between the two input parameters

import random

def main():
    x=eval(input("Enter the starting value: "))
    y=eval(input("Enter the ending value: "))

    randNum(x,y)
    
def randNum(a,b):
    x=random.randrange(a,b)

    print (x)

main()

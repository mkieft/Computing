#Lab 6 Q 8
#Maura Kieft
#10/6/2016
#8.	Write a program which roll two dice and if the sum is even or if both of them have the same number print “Winner” otherwise print “You Lost”.

import random

def main():
    x=random.randrange(1,7)
    y=random.randrange(1,7)
    
    z=x+y
    print("First Die: ",x)
    print("Second Die: ",y)
    print("Sum of Dice Roll: ",z)

    if (z%2==0)or (x==y):
        
        print("Winner!")
    else:
        print("Loser!")

main()

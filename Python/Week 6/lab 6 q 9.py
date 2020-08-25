#Lab 6 Q 9
#Maura Kieft
#10/6/2016
#	Write a program which roll two dice and if the sum is greater than 7

import random

def main():
    x=random.randrange(1,7)
    y=random.randrange(1,7)

    z=x+y
    print("First die roll: ",x)
    print("Second die roll: ",y)
    print("Sum of dice roll: ",z)

    if (z>7)and((x%2==1)or(y%2==1)):
        print("winner!")

    else:
        print ("Loser!")

main()

#Lab 6 Q 10
#Maura Kieft
#10/6/2016
#10.	I once played a game called “Lucky Seven

import random

def main():
    a=eval(input("Enter input between 2-12: "))

    x=random.randrange(1,7)
    y=random.randrange(1,7)

    z=x+y
    print("Dice roll sum: ",z)
    
    if (z<7):
        print("Under Seven")
    if (z==7):
        print("Lucky Seven")
    if (z>7):
        print("Over Seven")

    if (2<=a<7)and (z<7):
        print("Winner!")
        
    if (a==7) and(z==7):
        print("Winner!")
        
    if (7<a<=12)and(z>7):
        print("Winner!")

    else:
        print("You Lost")
        
    
main()

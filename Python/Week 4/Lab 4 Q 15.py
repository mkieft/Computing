#Lab 4 Prob 15
#Maura Kieft
#9/22/2016
#A throw of dice can be simulated by generating a random number between 1 and 6

import random

def main():
    
    x=random.randrange(1,7)
    y=random.randrange(1,7)
    print ("#1:",x)
    print ("#2:",y)
    print ("Sum of Dice",x+y)
    

main()

#Lab 8 Q 9
#Maura Kieft
#10/20/2016
#9.	Write a function which simulates a throw of dice throwofdice().

import random

def main():
    a=1
    b=2
    count=0
    
    while (a!=b):
        a=throwofdice()
        b=throwofdice()
        
        count=count+1
        if (a==b):
            print("Number of rolls:", count)
            print("Double!",a," = ",b)
    
        

def throwofdice():
    x=random.randrange(1,7)
 
    return x
    



main()

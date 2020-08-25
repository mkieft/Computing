#Lab 8 Q 10
#Maura Kieft
#10/20/2016
#10.	Write a program which uses two functions rollOfDice() and oddEven(a

import random



def main():
    odd=0
    even=0
    
    
    
    for i in range(100):
        x=rollofDice()
        aa=oddEven(x)
        if aa==1:
            even=even+1
        if aa==2:
            odd=odd+1
    print("Number of odd rolls is: ",odd)
    print("Number of even rolls is: ",even)
            

def rollofDice():
    x=random.randrange(1,7)
    return x



def oddEven(a):
    if a%2==0:
        return(1)
    else:
        return(2)

           


main() 

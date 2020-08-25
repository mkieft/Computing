#Lab 8 Q 11
#Maura Kieft
#10/20/2016
#11.	Write and test a function which computes and return the sum of squares

import math

def main():
    a=eval(input("Enter starting point: "))
    b=eval(input("Enter ending point: "))

    sumofSquares(a,b)

def sumofSquares(x,y):
    sum1=0
    
    for i in range(x,y):
        i=i**2
        sum1=sum1+i

    print("Sum of squares from", x," to ",y,"is: ",sum1)

main()
       
        

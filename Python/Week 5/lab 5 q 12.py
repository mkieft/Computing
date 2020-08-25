#Lab 5 Q 12
#Maura Kieft
#9/29/2016
#12.	Write a program which takes two inputs: i) a starting integer and ii) an ending integer

import math

def main():
    sum=0
    a=eval(input("Enter starting integer: "))
    b=eval(input("Enter ending integer: "))
    
    for i in range (a,b+1):
        s=i**2
        sum=sum+s

    print("Sum: ",sum)

main()

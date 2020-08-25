#Lab 9 Q 6
#Maura Kieft
#10/27/2016
#6.	Write a Python function randlist(n) that generates a list of ‘n’ random integers from 10 to 25

import random

def main():
    x=eval(input("Enter number of random integers: "))
    y=randlist(x) 

    print(y)

def randlist(n):
        list1=[]
        for i in range(n):
            x=random.randrange(10,26)

            list1.append(x)

        return list1   


main() 

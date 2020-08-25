#Lab 9 Q 8
#Maura Kieft
#10/28/2016
#Write a Python function sumofsquares(l)  that takes a list of numbers as an argument and computes and returns the sum of the squares of those numbers


import random 

def main():
    a=eval(input("Enter number of elements you want in your list: "))
    b=randlist(a)
    print("New list is: ",b)
    
    ss=sumofsquares(b) 
    print("The sum of the squares is: ",ss)


def randlist(n):
        x=[]
        for i in range(n):
            z=random.randrange(10,26)

            if (x.count(x)==0):
                x.append(z)
        
        return(x)

def sumofsquares(l):
    sum1=0
    x=[]
    for i in range(len(l)):
        
        sum1=sum1+l[i]*l[i]
    
    return(sum1) 
        



main() 

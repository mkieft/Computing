#Lab 9 Q 7
#Maura Kieft
#10/27/2016
#Write a Python function skip1()  that takes a list as an argument and returns every other item in the list, starting from the first item


import random

def main():
    
    a=eval(input("Enter number of elements you want in your list: "))

    b=randlist(a)
    print("New list is: ",b)
    c=skip1(b)
    print("New list with skipped items: ",c)

    
def randlist(n):
        x=[]
        for i in range(n):
            z=random.randrange(10,26)

            if (x.count(x)==0):
                x.append(z)
        
        return(x) 
    
def skip1(l):
        x=[]
        
    
        for i in range(0,len(l),2):
            x.append(l[i])
       
    
        return(x)

    
main() 

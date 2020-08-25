#Lab 9 Q 10
#Maura Kieft
#11/29/2016
#Write and test a function which returns the minimum and maximum of the numbers in a list. 


import random 

def main():
    a=eval(input("Enter number of elements you want in your list: "))
    b=randlist(a)
    print("New list is: ",b)
    
  
    minoflist(b)


def randlist(n):
        x=[]
        for i in range(n):
            z=random.randrange(10,26)

            if (x.count(x)==0):
                x.append(z)
        
        return(x)

def minoflist(a):
    list1=a
    x=min(list1)
    y=max(list1) 

    print("The minimum value in the list is: ",x)
    print("The maximum value in the list is: ",y)


main()
    

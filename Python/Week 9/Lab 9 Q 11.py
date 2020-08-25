#Lab 9 Q 11
#Maura Kieft
#11/29/2016
#Write and test a function which returns the minimum and maximum of the numbers in a list without using the min() and max() function. 


import random 

def main():
    a=eval(input("Enter number of elements you want in your list: "))
    b=randlist(a)
    print("New list is: ",b)
    
  
    x=minoflist(b)
    print("Min value is: ",x)
    y=maxoflist(b)
    print("Max value is: ",y)

def randlist(n):
        x=[]
        for i in range(n):
            z=random.randrange(10,26)

            if (x.count(x)==0):
                x.append(z)
        
        return(x)

def minoflist(a):
    min1=a[0]

    for i in a:
        if min1>=i:
            min1=i
    return min1
    

def maxoflist(a):
    max1=a[0]
    
    for i in a:
        if max1<=i:
            max1=i
    return max1

    

main()
    

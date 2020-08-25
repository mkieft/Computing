#Lab 9 Q 9
#Maura Kieft
#11/29/2016
#9.	Write a Python function clip_list(l,x) that takes a list of numbers and another number as arguments


import random 

def main():
    x=[]

    for i in range (0,7):
        s=eval(input("Enter your integers: "))
        x.append(s)

    y=eval(input("Enter a number: "))
    cliplist(x,y)
    
def cliplist(l,n):
    for i in range (0,len(l)):

        if l[i]>n:
            print(l[i])
        
    


main()

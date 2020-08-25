#Lab 6 Q 3
#Maura Kieft
#10/6/2016
#Write a program which simulates the roll of a dice 20 times

import random


def main():
    sum1=0
    sum2=0
    sum3=0
    sum4=0
    sum5=0
    sum6=0
    
    for x in range(20):
        x= random.randrange(1,7)
        print(x)
        if (x==1):
            sum1=sum1+1
        if (x==2):
            sum2=sum2+1
        if (x==3):
            sum3=sum3+1
        if (x==4):
            sum4=sum4+1
        if (x==5):
            sum5=sum5+1
        if (x==6):
            sum6=sum6+1
        

    print("Six=",sum6,"Five=",sum5,"Four=",sum4,"Three=",sum3,"Two=",sum2,"One=",sum1)
            
        



main()

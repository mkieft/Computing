#Lab 5 Q 5
#Maura Kieft
#9/29/2016
#5.	Write a program that simulates 10 consecutive rolls of a dice

import random

def main():
    sum=0

    for x in range(1,11):
        
        x=random.randrange(1,7)
        sum=sum+x
        print("Running total: ", sum)
        
    y=(sum/10)
    print("Average: ",y)

main()

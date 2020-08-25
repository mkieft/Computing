#Lab 6 Q 11
#Maura Kieft
#10/6/2016
#11.	Generate 10 random integers between 100 -1000 using a while loop and print them

import random

def main():
    i=0
    max=0
    min=10000000000000
    sum1=0
    while(i<10):
        x=random.randrange(100,1000)
        print (x)
        i=i+1
        if (x>max):
            max=x
        if (x<min):
            min=x
        sum1=sum1+x
        av=sum1/10

    print("Maximum: ",max)
    print("Minimum: ",min)
    print("Average: ",av)
main()

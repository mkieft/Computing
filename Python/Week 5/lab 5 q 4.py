#Lab 5 Q 4
#Maura Kieft
#9/29/2016
#4.	Write a program that generates and prints 10 random numbers in the range of 0.00 - 99.99. The answers display only two decimal places.

import random
def main():
    for x in range (10):
        x=random.random()
        y=(x*100)
        y1=round(y,2)
        print ("Rounded 2 decimal places: ",y1)

main()

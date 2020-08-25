#Lab 5 Q 1
#Maura Kieft
#9/29/2016
#1Write a program using the IF statement that prints the squares and square roots for all EVEN integers between 1 and 26

import math

def main():
    for x in range (1,27):
        if x%2==0:
            print(x)
            print(x*x)
            print(math.sqrt(x))



main()

#Lab 4 Prob 10
#Maura Kieft
#9/22/2016
#Write a program that prints the squares and square roots for all EVEN integers between 1 and 26.

import math

def main():
    for i in range (1,26,2):
        print(i)
        print(i**2)
        print(math.sqrt(i))

main() 

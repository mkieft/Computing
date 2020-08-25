#Lab 6 Q 4
#Maura Kieft
#10/6/2016
#4.	Write a program which simulates the roll of a dice 25 times

import random

def main():
    sum=0
    
    for x in range (25):
        x=random.randrange(1,7)
        print(x)
        if x==4:
            sum=sum+1

        if sum>4:
            print("You win!")
            break
    if sum<4:
         print("You lose")
        
        
main() 

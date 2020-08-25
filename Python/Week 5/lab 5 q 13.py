#Lab 5 Q 13
#Maura Kieft
#9/29/2016
#13.	Two friends (Alice and Bob) are playing a game where they roll two dice

import random
def main():
    a=random.randrange(1,7)
    a1=random.randrange(1,7)
    a2=a+a1
    print("Alice dice roll: ",a2)
    b=random.randrange(1,7)
    b1=random.randrange(1,7)
    b2=b+b1
    print("Bob dice roll: ",b2)

    if (a>b):
        print("Alice is the winner!")
    if(b>a):
        print ("Bob is the winner!")
    if (a==b):
        print ("It's a tie!")

main()
    
        
    
    

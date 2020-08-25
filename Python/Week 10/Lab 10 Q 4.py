#Lab 10 Q 4


#Write a program which creates a text file (friend.txt)


import random

def main():

    x=open('friend.txt','w')

    for i in range (5):
        name=input("Enter your friend name: ")
    
        a=str(randomage())
        print(a)
        c=randomgpa()
        print(c)
        b=str(c)
        s=name+": "+str(a)+": "+str(c)+"\n"
    
    
        x.write(s)

    x.close 

    
def randomage():

    x=random.randrange(17,24)
    return x

def randomgpa():

    b=random.random()+3
    y=round(b, 2)
    return y 

    
main()

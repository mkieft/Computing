#Lab 8 Q 7
#Maura Kieft
#10/20/2016
#write a function called randomChar() which return a random character from ‘A’ to ’Z

import random

def main():
    for i in range(10):
        randomChar(i)
        
def randomChar(a):
    
    x=random.randrange(65,91)
    print(chr(x))

main()
        
    

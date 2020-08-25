#Lab 5 Q 6
#Maura Kieft
#9/29/2016
#6.	Generate 10 random integers between 10 -1000 and print them. Also, find the maximum number for the 10 integers.


import random

def main():
    max=0
    for x in range(10):
       x=random.randrange(10,1000)
       print(x)
       if (x > max):
           max=x
    print("The max is: ",max)
          
main()

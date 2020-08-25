#Lab 4 Prob 13
#Maura Kieft
#9/22/2016
#Write a program that asks the user to enter three numbers: a starting value, an ending value, and an increment. The program prints out all numbers from starting value to ending value in step of increment.

def main():
    a=eval(input("Enter Starting Value:"))
    b=eval(input("Enter Ending Value:"))
    c=eval(input("Enter Increment:"))

    for i in range (a,b,c):
           print (i)

main()

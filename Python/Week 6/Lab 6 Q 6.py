#Lab 6 Q 6
#Maura Kieft
#10/6/2016
#6.	Write a program that takes a user input (an integer) and prints out if the integer is a positive or negative

def main():
    i=eval(input("Enter an integer: "))

    if (i>0):
        print("Number is Positive")
    if (i<0):
        print("Number is Negative")
    if(i%2==1):
        print("Number is Odd")
    if (i%2==0):
        print("Number is Even")

main()

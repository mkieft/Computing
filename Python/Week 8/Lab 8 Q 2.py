#Lab 8 Q 2
#Maura Kieft
#10/20/2016
#2.	Write a function which take as input three numbers from the user and prints the largest of the three numbers

def main():
    x=eval(input("Enter first number: "))
    y=eval(input("Enter second number: "))
    z=eval(input("Enter third number: "))

    biggestNumb(x,y,z)

def biggestNumb(a,b,c):

    if a>b and a>c:
        print("Largest number is ",a)
    if b>a and b>c:
        print("Largest number is ",b)
    if c>a and c>b:
        print("Largest number is ",c)
main()

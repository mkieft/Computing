#Lab 8 Q 6
#Maura Kieft
#10/20/2016
#6.	Write a function which test divisibility (mod

def main():
    x=eval(input("Enter first integer: "))
    y=eval(input("Enter second integer: "))

    divis(x,y)

def divis(a,b):
    if a%b==0:
        print(a,"is complete divisible by ",b)
    else:
        print("There is a remainder")

main()

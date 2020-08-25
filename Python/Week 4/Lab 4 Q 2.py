#Lab4 Prob 2
# Maura Kieft
#9/22/2016
#Modify question 1 such  that it asks the user input for  two numbers and then computes and print the remainder and quotient when one number is divided by the other.


def main():
    a= eval(input("Enter x:"))
    b= eval(input("Enter y:"))
    x= a%b
    y= a//b

    print("Remainder", x)
    print("Quotient", y) 

main()

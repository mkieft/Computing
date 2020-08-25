#Lab 7 Q 10
#Maura Kieft
#10/13/2016
#10.	A year is a leap year if it is divisible by 4

def main():

    x=eval(input("Enter the year: "))

    if (x%4==0)and (x%400==0):
        print("Leap year")

    else:
        print("Not a leap year")

main()

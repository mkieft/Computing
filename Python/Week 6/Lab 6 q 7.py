#Lab 6 Q 7
#Maura Kieft
#10/6/2016
#7.	The Dean’s office ask you to write a program

def main():
    x=eval(input("Enter Graduating Student GPA: "))

    if(x>=3.9):
        print("summa cum laude")

    if(3.9<x>=3.7):
        print("magna cum laude")

    if(3.5<x>=3.5):
        print("cum laude")

    if(x<3.5):
        print("No honors")

main()

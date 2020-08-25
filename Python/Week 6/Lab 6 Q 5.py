#Lab 6 Q 5
#Maura Kieft
#10/6/2016
#5.	Write a program that takes three inputs from a student

def main():
    n=input("Enter Name: ")
    g=eval(input("Enter your GPA: "))
    s=eval(input("Enter semester you have been in college: "))

    if (g>3.5) and (s>2):
        print("You are an honors student ",n)
    else:
        print("You are not an honors student ",n)

main()

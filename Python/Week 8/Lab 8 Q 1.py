#Lab 8 Q 1
#Maura Kieft
#10/20/2016
#1.	Write a function which takes as input an integer from the user

def main():
    a=eval(input("Enter an integer: "))
    evenNum(a)

def evenNum(x):
    if x%2==0:
        print("Integer is even")
    else:
        print("Integer is odd")
    






main()

#Lab 7 Q 4
#Maura Kieft
#10/13/2016
#4.	Write a program (using a while loop) to find factorial of number which the user enter

def main():
    n=eval(input("Enter a number: "))
    fact=1
    i=1
    while (i<=n):
        fact=fact*i
        i=i+1
    print("Factorial is :",fact)

main()
        
        

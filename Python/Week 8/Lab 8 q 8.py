#Lab 8 Q 8
#Maura Kieft
#10/20/2016
#8.	Write and test a function which takes a user input and test if it is prime or not

def main():
    a=eval(input("Enter a number to test if it is prime: "))

    primeNum(a)

def primeNum(x):
    if x>1:
        for i in range(2,x):
            if(x%i)==0:
                print(x," is not prime")
                
                break
        else:
            print(x, "is a prime number")
    else:
        print(x," is not a prime number")

main()

#Lab 11 Q 1
#Maura Kieft
#11/10/2016
#Write a program that takes two numbers as input from the user in the main()

def main():

    x=eval(input("Enter first number: "))
    y=eval(input("Enter second number: "))

    if x<y:
        a=mean(x,y)
        print("Average of the two numbers: ",a)

    if x>y:
        b=runningSum(x,y)
        print("Running sum is: ",b)

    if x==y:
        c=fact(y)
        print("Factorial is: ",c)
        
def mean(a,b):
    z=a+b
    avg=z/2
    return(avg)

def runningSum(a,b):
    total=0
    for i in range(b,a+1):
           total=total+1
    return(total)

def fact(n):
    f=1
    for i in range(1,n+1):
        f=i*f
    return (f)
        
main()
            

        

#Lab 7 Q 11
#Maura Kieft
#10/13/2016
#11.	The Fibonacci sequence starts

def main():
    n=10
    
    n=int(input("Enter number: "))

    
    n1=0
    n2=1
    count=2

    if n<=0:
        print("Enter positive integer")
        
    elif n==1:
        print("Fibonacci sequence up to",n,":")
        print(n1)

    else:
        print("Fibonaccie sequence up to",n,":")
        print(n1," , ",n2,end=' , ')
        
        while count < n:
            nth=n1+n2
            print (nth,end=' , ')
            n1=n2
            n2=nth
            count += 1

main()

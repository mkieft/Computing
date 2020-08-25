#Lab 7 Q 13
#Maura Kieft
#10/13/2016
#13.	A positive whole number n > 2 is prime if no number between 2



def main():
    n=1000000
    n=eval(input("Enter a positive whole number > 2: "))
    
    if n>2:
        for i in range (2,n):
            if(n%i)==0:
                print(n,"is not prime", ",divisible by", i)
            
                break
        else:
            print(n,"is a prime number")

main()

#Lab 8 Q 13
#Maura Kieft
#10/20/2016
#Write a functions which computes and prints the interest earned on a principal

def main():
    P=eval(input("Enter the principal investment amount(the initial deposit): "))
    r=eval(input("Enter the aunnual interest rate(decimal): "))
    n=eval(input("Enter the number of times that interest is compounded per year: "))
    t=eval(input("Enter the number of years the money is invested: "))

    w=r/n
    x=(1+w)
    y=P*x
    z=n*t
    A=y**z
    
    annualComInt(A)

def annualComInt(X):
    


    
    print("The future value of the investment, including interest is ",X)

        

main()
    

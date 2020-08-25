#Lab 8 Q 12
#Maura Kieft
#10/20/2016
#Write an interactive python program to compute the income tax

def main():
    print("This program computes income tax")
    n=input("Enter name: ")
    y=eval(input("Enter the year: "))
    i=eval(input("Enter annual income: "))
    m=input("Married? (1 for Yes) or (2 for No): ")

    if (m==1):
        a=married(i)
    if (m==2):
        a=single(i)
    print(n, "for the year", y, "your tax is", a)
    
def married(i):
    c=i-8000
    if (c<12000):
        print("Your tax rate is 3%")
        a=c*(0.03)
    elif (12000<c<20000):
        print("Your tax rate is 10%")
        a=c*(0.10)
    elif (20000<c<=50000):
        print("Your tax rate is 23%")
        a=c*(0.23)
    elif (50000<c<=80000):
        print("Your tax rate is 30%")
        a=c*(0.30)
    elif (80000<c<=100000):
        print("Your tax rate is 33%")
        a=c*(0.33)
    else:
        print("your tax rate is 35%")
        a=c*(0.35)
    return(a)

def single(i):
    c=i-5000
    
    if (c<=12000):
        print("Your tax rate is 3%")
        a=c*(0.03)
    elif (12000<c<=20000):
        print("Your tax rate is 10%")
        a=c*(0.10)
    elif (20000<c<=50000):
        print("Your tax rate is 23%")
        a=c*(0.23)
    elif (50000<c<=80000):
        print("Your tax rate is 30%")
        a=c*(0.30)
    elif (80000<c<=100000):
        print("Your tax rate is 33%")
        a=c*(0.33)
    else:
        print("your tax rate is 35%")
        a=c*(0.35)
    return(a)

  
main()

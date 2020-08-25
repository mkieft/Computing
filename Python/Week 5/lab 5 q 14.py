#Lab 5 Q 14
#Maura Kieft
#9/29/2016
#14.	Consider how store clerks give change to their customers


def main():
    x=eval(input("Enter total change: "))
    q=x//25
    q1=x%25
    d=q1//10
    d1=q1%10
    n=d1//5
    p=d1%5
    print("Quarters: ",q)
    print("dimes: ",d)
    print("nickels: ", n)
    print("pennies: ",p)

main()

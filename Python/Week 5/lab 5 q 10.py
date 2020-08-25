#Lab 5 Q 10
#Maura Kieft
#9/29/2016
#10.	You are organizing a party this Friday and need to buy drinks

import math

def main():
    a=eval(input("Number of People: "))
    x=a*150
    p=x/1500
    y=math.ceil(p)
    print("Number of bottles needed: ",y)

main()

#Lab 4 Prob 4
#Maura Kieft
#9/22/2016
#Take as input the radius of a circle from the user and define pi=22/7. Compute and print the circumference and area of the circle.

def main():
    a=eval(input("Radius of Circle:"))
    p=22/7
    c=2*p*a
    r=p*a**2
    print ("Circumference:",c)
    print ("Area:", r)

main()
    

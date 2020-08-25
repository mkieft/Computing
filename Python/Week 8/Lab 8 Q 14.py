#Lab 8 Q 14
#Maura Kieft
#10/20/2016
#Wind Chill Factor

def main():
    x=eval(input("Enter the temperature to compute wind chill: "))
    y=eval(input("Enter the wind velocity to compute wind chill: "))

    windchill(x,y)

def windchill(t,v):
    a=.6215*t
    a1=35.74+a
    b=v**.16
    b1=35.75*b
    c=.4275*t
    d=v**.16
    e=c*d
    w=a1-b1+e

    print("Wind chill is ",w)

main()
    

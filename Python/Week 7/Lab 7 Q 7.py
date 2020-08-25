#Lab 7 Q 7
#Maura Kieft
#10/13/2016
#7.	The body mass index (BMI) is calculated as a person’s weight

def main():
    x=eval(input("Enter Weight (in pounds): "))
    y=eval(input("Enter Height (in inches): "))

    a=(x*720)
    b=(y*y)
    c=a/b

    if 19<=c<=25:
        print("BMI is: ",c,"Within healthy range ")
    elif c<19:
        print("BMI is: ",c,"Below healthy range ")
    else:
        print("BMI is: ",c,"Above healthy range ")

main()

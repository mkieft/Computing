#Lab 7 Q 5
#Maura Kieft
#10/13/2016
#5.	Many companies pay time-and-a-half for any hours worked above 40 in a given

def main():
    x=eval(input("Enter hours worked this week: "))
    y=eval(input("Enter hourly wage: "))

    if x>40:
        z=x-40
        a=z*(y*1.5)
        b=a+(x*y)
        print("Total Wage (With overtime): ",b)

    else:
        print("Total Wage: ",x*y)

main()

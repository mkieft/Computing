#Lab 7 Q 8
#Maura Kieft
#10/13/2016
#8.	The speeding ticket fine policy in Manchester, NH is $50 plus $5 for each mph

def main():
    x=eval(input("Enter speed limit: "))
    y=eval(input("Enter clocked speed: "))

    if y>x:
        z=y-x
        f=z*5
        fine=f+50
        if x>90:
            a=fine+200
            
            print("Speed is illegal. Fine: $",a)
        elif 50<x<90:
            print("Speed is illegal, Fine: $",fine)
        

    if y<x:
        print("Speed is legal")

main()
        

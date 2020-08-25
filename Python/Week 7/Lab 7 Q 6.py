#Lab 7 Q 6
#Maura Kieft
#10/13/2016
#6.	A certain college classifies students according to credits earned

def main():
    x=eval(input("Enter course credits: "))

    if (x<7):
        print("You are a Freshman")
           
    elif (7<=x<16):
        print("You are a Sophomore")
           
    elif (16<=x<26):
        print("You are a Junior")
           
    elif (x>=26):
        print("You are a Senior")
           
    else:
        print("You are not classified according to credits")

main()
    

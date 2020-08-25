#Lab 6 Q 2
#Maura Kieft
#10/6/2016
#Write a program which prints all odd numbers divisible by 5 from 1 to 100 but stops printing the numbers if the number is divisible by 7 and 5.

def main():
    
    for x in range(0,100):
        
        if (x%7==0)and(x%5==0):
            break
        if(x%2==1):
            print(x)

main()
 

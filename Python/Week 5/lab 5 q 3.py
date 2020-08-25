#Lab 5 Q 3
#Maura Kieft
#9/29/2016
#3.	Write a programs using the IF statement that prints only integers that are multiples of 6 and 2 from 0 to 20.

def main():
    for x in range (0,21,2):
        if (x%2==0) and (x%6==0):
            print(x)

main() 

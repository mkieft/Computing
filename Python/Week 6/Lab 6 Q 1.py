#Lab 6 Q 1
#Maura Kieft
#10/6/2016
#1.	Write a program which prints all number divisible by 10 from 11 to 101 but skips (does not print) whenever a number is divisible by 15

def main():
    for x in range(11,101):
        if (x%10==0):
            if (x%15==0):
                continue
            print (x)
main()

#Lab 8 Q 5
#Maura Kieft
#10/20/2016
#5.	Write a function which prints all the factors of an input parameter


def main():
    a=eval(input("Enter an integer to compute factors: "))

    facts(a)

def facts(x):
    for i in range (1,x+1):
        if x%i==0:
            print(i)
main()

#Lab 6 Q 13
#Maura Kieft
#10/6/2016
#14.	Write a program (using a for loop) which adds all consecutive odd integers till the sum of integer becomes greater than 10

def main():
    sum1=0
    for x in range (100):
        if x%2==1:
            
            sum1=sum1+x
          
        if (sum1>100):
            break
    print("Last Integer: ",x)
    print("Sum: ",sum1)

main()

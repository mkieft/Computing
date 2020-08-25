#Lab 9 Q 3
#Maura Kieft
#10/27/2016
#3.	Write and test a function sumlist(l) which returns the sum of the numbers in a lis

def main():
    
    a=eval(input("Enter number of values: "))
    

    def sumlist(n):
        
        sum=0
        list=[]
    
        for i in range(n):
            x=eval(input("Enter number: "))
            list.append(x)
           
            sum=sum+x
        
           
        print(list)
        print("The sum is: ",sum)
        
    sumlist(a)
    
main()
    
           

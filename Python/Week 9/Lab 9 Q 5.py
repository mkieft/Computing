#Lab 9 Q 5
#Maura Kieft
#10/27/2016
#Write a function findinlist(l,x) in Python which takes a list and a number as input parameter and returns how many times the number occurred in the list

def main():
    list=[]
    n=eval(input("Enter how many numbers in the list: "))

    for i in range(n):
        x=eval(input("Enter number for the list: "))
        
        list.append(x)
    print(list)
    
    y=eval(input("Enter the number you'd like to find: "))
      
    def findinlist(a,b):
        c=a.count(y)
        
        

        print("The number of times",b ,"occurred in the list is: ",c," times")
    findinlist(list,y)
    
main() 

#Lab 9 Q 4
#Maura Kieft
#10/27/2016
#Write a python program that takes integer numbers from the user and adds them to a list of number

def main():
    list=[]
    a=1
    
    while a>0:
        a=eval(input("Enter a number: "))
        z=list.count(a)
        
        if z==0: 
            list.append(a) 
        if z!=0:
            break
    print(list)

main() 

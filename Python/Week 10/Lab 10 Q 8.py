#Lab 10 Q 8


#Write a program that reads from “gpa.txt” and print out the average gpa of your 5 friends.

def main():
    
    f=open("gpa.txt","r")
    count=0
    
    for x in f:
        count=count+1
        print(x)
        print("Count: ",count)

        z=x.split(",")
        print(z[1])

  
        
    sum1=sum(z[1])
             
    print("Sum: ",sum1)
    average=sum1/count
    print("Average is: ",average)


    
main()

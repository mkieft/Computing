#Lab 10 Q 6


#Write a program which takes from users the following inputs


def main():
    x=open("cs111.txt","w")

    name="a"

    while (name!=""):

    
        name=input("Enter first name: ")
        b=input("Enter last name: ")
        c=eval(input("Enter GPA: "))
        d=input("Enter favorite team: ")


    
        
        S=str(name)+", "+str(b)+", "+str(c)+", "+str(d)+"\n"

        x.write(S)
        
    
    x.close()

main()
    

    

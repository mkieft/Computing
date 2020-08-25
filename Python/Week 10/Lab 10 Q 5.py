#Lab 10 Q 5


#Write a program which takes 10 names and gpa from the user


def main():

    x=open('gpa.txt','w')


    for i in range (5):
        
        a=input("Enter name: ")
        b=eval(input("Enter GPA: "))

        c=str(a)+", "+str(b)+"\n"
        
        
        x.write(c) 

    x.close()


main()

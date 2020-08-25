#Lab 5 Q 11
#Maura Kieft
#9/29/2016
#11.	Write a  program which takes two inputs

def main():
    x=eval(input("Enter file size: "))
    y=eval(input("Enter download speed: "))
    z=x/y
    a=z//60
    b=z%60
    print("It will take,",a, "minutes and",b,"seconds to download the file.")
main()

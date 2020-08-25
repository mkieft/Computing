#Lab 10 Q 7


#Write a program that reads from “fav.txt” and print out the name and their age

def main():

    x=open('fav.txt','r')

    data=x.read

    print(data)

    x.close


main() 

#Lab 7 Q 2
#Maura Kieft
#10/13/2016
#2.	Write a program that prints the ASCII decimal equivalent of English lowercase and upper case alphabets

def main():
    for x in range (65,90):
        print (chr(x),"=",x)
    for x in range (97,123):
        print (chr(x),"=",x)
main() 

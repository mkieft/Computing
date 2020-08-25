#Lab 10 Q 10
#Maura Kieft
#11/02/2016
#

def main():
    print("this program reads data from cs111.txt and creates emails")

    infile=open("cs111.txt","r")

    emailist=""

    for line in infile:
        splitt=line.split(",")
        print(splitt)

        first=(splitt[0]).lower()

        last=(splitt[1]).lower()

        email=first[0]+last[0:7]+"anselm.edu"

        emailist=emailist+email+", "

    outfile=open("emails.txt","w")
    outfile.write(emailist)
    
    infile.close() 

main()

#Lab 9 Q 12
#Maura Kieft
#10/29/2016
#Write a program takes a list that has the names of the cities at the 0, 3, 6..position(index)

def main():

    city=['Austin',72,53,'Baltimore',65,45,'Boston',56,44,'Chicago',59,41,'Denver',64,36,'Detroit',59,42,'Las Vegas',80,59,'Los Angeles',75,56,'Miami',84,70,'New York',62,48,'Philadelphia',65,47,'Phoenix',87,63,'Portland',63,45,'Salt Lake City',64,42,'San Francisco',64,51,'Washington, DC',67,50]
    
    a=input("Enter city to find out their high and low temperatures: ")

    print("Temperatures for ",a)

    for i in range (0, len(city)):
        if city[i]==a:
            print("High temperature for",a ,"is: ", city[i+1]) 

            print("Low temperature for",a," is: ", city[i+2])
            

main()

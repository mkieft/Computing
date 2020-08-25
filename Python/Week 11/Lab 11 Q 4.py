#Lab 11 Q 4
#Maura Kieft
#11/10/2016
#4.	Write a program performing the following tasks over the dictionary

def main():

    f=open("state.txt","r")
    
    x={}    #this creates a dictionary
    
    for i in f:
        data=i.split(":")   #splits data into strings
        states=data[0]
        capitals=data[1].rstrip("\n")

        print(states)

        x[states]=capitals

    print("All the states and their capitals: ")
    print(x)

    print()

    n=input("Enter a state to find its capital: ")

    if n in x:
        print("The capital of", n," is ",x[n])
    else:
        print("The state is not in dictionary")
    print()

    print("New list with New England states: \n")
    x["Maine:"]= "Augusta"
    x["New Hampshire"]="Concord"
    x["Massachusetts"]="Boston"
    x["Rhode Island"]="Providence"
    x["Vermont"]="Montpelier"
    x["Connecticut"]="Hartford"

    print(x)

    print()

    d=input("Enter state you want to delete: ")
    del x[d]

    print(x)

    print()

    print("Check if there is an entry for Puerto Rico in the dictionary: ")
    if "Puerto Rico" in x:
        print("Capital is",x["Puerto Rico"])
    else:
        print("Not in this dictionary")

    f.close
    
    
        
main()

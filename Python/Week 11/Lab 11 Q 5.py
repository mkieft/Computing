#Lab 11 Q 5
#Maura Kieft
#11/10/2016
#5.	Dictionaries use a different internal storage mechanism

import time

def main():

    start=time.time()
    f=open("crosswords.txt","r")
    d=f.read()
    
    search=input("Enter the word you would like to find: ")
    if search in d:
        print("Found!!")
    else: 
        print("Not found.")
    f.close

    end=time.time()
    print("Time took to find word: ",end-start)

main() 
def dict1():
    start2=time.time()
    f=open("crosswords.txt","r")
    x={}

    for i in f:
        data=i.split(" : ")

    search=input("\n Enter word you want to find: ")
    if search in data:
        print("Found!!")
    else:
        print("Not found.")
    f.close

    end2=time.time()
    print("Time taken to find word: ",end2-start2)

dict1() 
    

    


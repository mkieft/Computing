#Lab 11 Q 3
#Maura Kieft
#11/10/2016
#Write a program which prompts the user for a line of text in the main(). It should then compute the following by invoking a function (written by you)  for each of the following question

def main():

    x=input("Please enter a line of text: ")

    a=charCount(x)
    print("Number of characters in the string: ",a)


    b=numbOfwords(x)
    print("Number of words in the sentence: ",b)

    c=Avglength(x)
    print("The average word length is: ",c) 





    
def charCount(a):
    
    x=len(a)
    return x

def numbOfwords(b):
    x=len(b.split())
    return x

def Avglength(c):
    sum=0
    for ch in c.split():
        ch=len(ch)
        sum=sum+ch
    avg=(sum)/len(c.split()) 
    
    return avg

    
        


main()

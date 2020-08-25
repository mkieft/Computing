#Lab 10 Q 1
#Maura Kieft
#11/3/2016
#1.	Write a program which takes a sentence from a user

def main():
    a=input("Enter a sentence: ")

    y=a.upper()
    print("Sentence in uppercase: ",y)

    

    z=a.split()
    
    b=len(z)
    print("Number of words in the sentence is: ",b)

    x=AvgLength(a)
    print("Average word length is: ",x)

def AvgLength(s):
    words=s.split()
    count=len(words)
    sum=0
    for word in words:
        ch=len(word)
        sum=sum+ch
    avg=sum/count
    

    return(avg)


    
main()

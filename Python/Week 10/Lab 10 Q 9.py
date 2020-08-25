#Lab 10 Q 9


#write a program that reads from cs111.txt and reports


def main():
    f=open("cs111.txt","r")
    count=0
    mm=0
    rr=""
    for x in f:
        count=count+1
        print(x)
        
        z=x.split(":")
        print(z[0],z[2]


        if (int(z[2])>mm)
            mm=z[2]
            rr=x
               
    print("Record with highest GPA: ",rr)
        
        
    print("Number of records: ",count)

    f.close


main() 

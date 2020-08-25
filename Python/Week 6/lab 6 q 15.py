#Lab 6 Q 15
#Maura Kieft
#10/6/2016
#15.	To work at Saint Anselm College

def main():
    x=0
    y=0
    z=0
    
    print("Please answer questions with 1(Yes) or 0(No)")
    
   
    x=eval(input("Do you have an unexpired US passport, unexpired foreign passport (with attached employment and authorization), or an alien registration card (with photograph)? "))
    if (x==1):
        x=1
    
    y=eval(input("Do you have a state issued drivers liscense/school ID card with a photograph or US military ID card? "))
    if (y==1):
        y=1
    
    z=eval(input("Do you have your original social security card, a birth certificate (issued by the state, county, or municipal authority bearing a seal or other certification), or an unexpired Immigration and Naturalization Service (INS) employment authorization? "))
    if (z==1):
        z=1

    a=x+y+z
    
    if (a==3):
        print("Eligible for yellowcard")
    else:
        print("Not Eligible")
    

main()
    

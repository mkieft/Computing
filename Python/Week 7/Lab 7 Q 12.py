#Lab 7 Q 12
#Maura Kieft
#10/13/2016
#12.	The Syracuse (also called Collatz or Hailstone) sequence is generated by starting with a nat-
#ural number and repeatedly applying the following function until reaching 

def main():
    x=eval(input("Enter a starting value: "))
    print(x) 
    while x>1:
        
        if x%2==0:
            x=x/2
            print("Syracuse sequence is:", x)
        else:
            x=3*x+1
            

            print("Syracuse sequence is:", x)

main()

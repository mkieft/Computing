#Lab 8 Q 3
#Maura Kieft
#10/20/2016
#3.	Write two functions circle() and  square()  that calculates and print perimeter and area of a circle and square respectively

def main():
    a=eval(input("Enter radius of circle to find perimeter: "))
    b=eval(input("Enter one side of square to find perimeter: "))
    
    circle(a)
    square(b)
    
def circle(x):
    pi=3.1415
    
    c=2*pi*x
    print("Perimeter of the circle is ",c)
    

def square(y):
    s=y*4
    print("Perimeter of the circle is" ,s)





main()

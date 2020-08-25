#Lab 12 Q 7
#Maura Kieft
#11/17/2016
#Plot a bar graph which depicts the number of hours you study outside the class on the 7 days of the week.

from pylab import* 

def main():

    #X axis (days of the week)
    #x=["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"]
    x=[1,2,3,4,5,6,7]
    #Y axis (hours studying)

    y=[4, 2, 3, 2, 3, 1, 2]

    bar(x, y, width=.5, color="red")
    xlabel("Days of the Week")
    ylabel("Number of Hours Spent Studying")

    show()



main() 
    

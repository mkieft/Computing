#Lab 12 Q 6
#Maura Kieft
#11/17/2016
#Plot a line graph which has the first 5 integers on the x axis and the square of the integers on the y axis

from pylab import*

def main():


    #values for the X axis
    x=[1, 2, 3, 4, 5]

    #values for the Y axis
    y=[1, 4, 9, 16, 25]

    plot(x,y, "b*")
    xlabel ("X Axis: Integers 1-5")
    ylabel("Y Axis: Integers 1-5 squared")
    xlim(0, 6)
    ylim(0,26)

    show()

main()

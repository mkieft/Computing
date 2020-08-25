#Lab 12 Q 2
#Maura Kieft
#11/17/2016
#Draw the Target symbol

from graphics import *

def main():
    win=GraphWin("Target Symbol", 200,200)

    cir1=Circle(Point(100,100), 80)
    cir1.setFill("red")
    cir1.draw(win)

    cir2=Circle(Point(100,100), 60)
    cir2.setFill("white")
    cir2.draw(win)

    cir3=Circle(Point(100,100), 30)
    cir3.setFill("red")
    cir3.draw(win)
    




main()

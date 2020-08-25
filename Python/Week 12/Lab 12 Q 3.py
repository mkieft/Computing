#Lab 12 Q 3
#Maura Kieft
#11/17/2016
#Write a Python program that draws a house similar to one given below

from graphics import * \

def main():

    win=GraphWin(" House", 200,200)

    #Rectangle
    rect1=Rectangle(Point(45,180),Point(165,90))
    rect1.setFill("orange")
    rect1.draw(win)

    #Triangle
    tri=Polygon(Point(25,90),Point(110,20),Point(185,90))
    tri.setFill("blue")
    tri.draw(win)

    #Door rectangle
    rect2=Rectangle(Point(85,180),Point(125,120))
    rect2.setFill("yellow")
    rect2.draw(win)

    #Door knob
    cir1=Circle(Point(118,158),3)
    cir1.setFill("black")
    cir1.draw(win) 
    



main()
    

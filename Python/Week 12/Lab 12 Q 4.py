#Lab 12 Q 4
#Maura Kieft
#11/17/2016
#Write a python program that draws the flag of Israel

from graphics import *

def main():
    win=GraphWin("Flag of Israel", 500,300)
    win.setBackground("white")
    
    #Background 2 rectangle
    rect1=Rectangle(Point(0,20),Point(500,280))
    rect1.setFill("blue")
    rect1.draw(win)

    #Middle rectangle
    rect2=Rectangle(Point(0,70),Point(500,230))
    rect2.setFill("white")
    rect2.draw(win) 

    #Polygon top star
    poly1=Polygon(Point(200,190),Point(250,100),Point(300,190))
    poly1.setWidth(8)
    poly1.setOutline("blue")
    poly1.draw(win)            

    #Polygon bottom star
    poly2=Polygon(Point(200,130),Point(250,220),Point(300,130))
    poly2.setWidth(8)
    poly2.setOutline("blue")
    poly2.draw(win)



main()
    


    

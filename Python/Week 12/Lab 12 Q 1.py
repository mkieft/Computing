#Lab 12 Q 1
#Maura Kieft
#11/17/2016
#Draw a simple traffic light in a graphics window that is 200 pixels wide by 200 pixels high. The three lights should have a diameter of 50 pixels each, and the traffic light should be centered in the graphics window


from graphics import *

def main():
    win=GraphWin("Traffic Light",200,200)

    
    

    #Rectangle
    
    rect=Rectangle(Point(75,25),Point(125,175))
    rect.draw(win)
                
    #Red circle
    cir1=Circle(Point(100,50), 25)
    cir1.setFill("red")
    cir1.draw(win)

    #Yellow circle
    cir2=Circle(Point(100,100), 25)
    cir2.setFill("yellow")
    cir2.draw(win)

    #Green circle
    cir3=Circle(Point(100,150), 25)
    cir3.setFill("green")
    cir3.draw(win) 
        





main() 

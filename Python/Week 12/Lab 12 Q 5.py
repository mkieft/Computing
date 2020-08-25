#Lab 12 Q 5
#Maura Kieft
#11.17.2016
#Draw a pie chart for an imaginary scenario

from pylab import *

def main():
    
    percent=[30, 15, 25, 10, 20]
    labels=["Housing/rent", "Transportation", "Lesiure", "Savings", "Misc Expenses"]
    
    explode=[0, 0, 0, 0, 0]

    pie(percent,explode,labels, shadow=True)
    title("Monthly Expenses")
    show()
    


main()

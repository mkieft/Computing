#Lab 10 Q 3
#Write a program which creates a text file (fav.txt)

def main():
    x=open('fav.txt','w')
    z=("Sara: 20 \nAndrew: 22 \nKristin: 18 \nDominika:20 \nCharlie: 22 \n")
    x.write(z)
    
    

    x.close()







main()

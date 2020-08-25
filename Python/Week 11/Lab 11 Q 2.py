#Lab 11 Q 2
#Maura Kieft

#2.	Create a list with at least 5 items you would like Santa Claus to bring you this Christmas.


def main():
    x=['socks','hats','makeup','beats headphones','books']

    x.sort()
    print("Sorted list: ",x)

    x.reverse()
    print("List reversed: ",x)

    y=len(x)
    print("Length of list: ",y)

    
    x.count('books')
    print("Number of times books appears in the list: ",x)

    x.insert(1,'new glasses')
    print("New list is: ",x)
main()

largest = None
smallest = None
while True:
    try:
        num= input("Enter a number")
        if(num=='done'):
            break
        n= int(num)
        if(n>largest or largest== None):
            largest = n
        if(n<smallest or smallest == None):
            smallest = n
    except:
        print("Invalid input")
        
print("Maximum is",largest)
print("Minimum is",smallest)

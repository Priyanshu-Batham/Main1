n = int(input("Enter a number:"))

#upper triangle
for i in range(n,0,-1):
    for j in range(0,i+1):
        print(" ", end = "")
        
    print("*", end = "")
    
    for j in range(0,(n-i)*2-1):
        print(" ", end = "")
    if(i!=n):
        print("*", end = "")

    print("")

#lower triangle
for i in range(0,n+1):
    for j in range(0,i+1):    
        print(" ", end = "")
        
    print("*", end = "")
    
    for j in range(0,(n-i)*2-1):
        print(" ", end = "")
    if(i!=n): #make it n
        print("*", end = "")

    print("")

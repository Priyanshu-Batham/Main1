d = int(input("Enter the lower limit of range:"))
u = int(input("Enter the upper limit of range:"))
ch = int(input("Enter 1 for prime numbers or 2 for armstrong number:"))
flag = True

#prime 
if(ch == 1):
    for i in range(d, u+1):
        a = i
        for j in range(2, (a//2)+1):
            if(a%j == 0):
                flag = False
                break
        if(flag == True):
            print(a)
        flag = True

#armstrong          
elif(ch == 2):
    for i in range(d, u+1):
        a = str(i)
        l = len(a)
        s = 0
        for char in a:
            number = int(char)
            s += number**l
        if(s == i):
            print(i)
        
        
        

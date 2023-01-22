i=int(input("Enter a number"))
temp=i
dig=0
newnum=0
while (i>0):
    dig=i%10
    newnum=newnum*10+dig
    i=i//10
if(newnum==temp):
    print("yes it is a pallindrome")
else:
    print("no its not a pallindrome")
    

lis = eval(input("Enter a list: "))
lis.append('a')
n = len(lis)
newLis = []
veryNewLis = []
for i in range(0, n-1):
    if(lis[i] == lis[i+1]):
        newLis.append(lis[i])
    else:
        newLis.append(lis[i])
        veryNewLis.append(newLis[:])
        newLis.clear()
    
print(veryNewLis)

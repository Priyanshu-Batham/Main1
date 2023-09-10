lis = eval(input("Enter a list of Elements: "))
n = len(lis)
item = ''
newLis = []

for i in range(0, n):
    item = item + str(lis[i])

lis.clear()
lis.append(item)
print(lis)

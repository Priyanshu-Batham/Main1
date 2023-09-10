lis = eval(input("Enter a list of numbers: "))
n = len(lis)
temp = lis[n-1]

for i in range(n-1, 0, -1):
    lis[i] = lis[i-1]
lis[0] = temp

print(lis)

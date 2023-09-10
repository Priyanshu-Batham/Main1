lis = eval(input("Enter a list of numbers: "))
n = len(lis)
ans = []

for i in range(0, n):
    if(lis[i] != 0):
        ans.append(lis[i])

for i in range(0, n-len(ans)):
    ans.append(0)

print(ans)

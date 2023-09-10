lis = eval(input("Enter a list of Number: "))
n = len(lis)
largest = lis[0]
secLar = lis[-1]
for i in range(0, n):
    if(largest < lis[i]):
        largest = lis[i]

for i in range(0, n):
    if(lis[i] > secLar and lis[i] != largest):
        secLar = lis[i]

print(secLar)

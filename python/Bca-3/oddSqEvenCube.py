l = eval(input("Enter a list of numbers: "))
n = len(l)

for i in range(0, n):
    if(l[i] % 2 != 0):
        l[i] = l[i]**2
    else:
        l[i] = l[i]**3

print(l)

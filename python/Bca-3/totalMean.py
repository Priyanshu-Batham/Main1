tup = eval(input("Enter a nested tuple:"))
n = len(tup)
sum = 0
mean = 0
totalMean = 0

for i in range(0, n):
    n2 = len(tup[i])
    for m in tup[i]:
        sum+=m
    mean = (sum/n2)
    totalMean += mean
    print(mean)
    sum = 0

print("Total mean = ", totalMean/n)

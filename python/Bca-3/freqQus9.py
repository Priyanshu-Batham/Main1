lis = eval(input("Enter a LIST: "))
n = len(lis)
ct = 1
uni = []

for i in range(0, n):
    for j in range(i+1, n):
        if(lis[i] not in uni and lis[i] == lis[j]):
            ct+=1
    if(lis[i] not in uni):
        uni.append(lis[i])
        print(f"frequency of {lis[i]} = {ct}")
        ct = 1

print("unique elements are: ",uni)

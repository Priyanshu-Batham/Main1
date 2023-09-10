lis = eval(input("Enter a lis of lists of elements: "))
n = len(lis)
maxi = 0
s = 0


for i in range(0, n):
    for j in lis[i]:
        s += j
    if(maxi < s):
        maxi = s
        ind = i
    s = 0
print('max sum: ',maxi,' list is at index :', i)

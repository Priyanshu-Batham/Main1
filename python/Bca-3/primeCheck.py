import math
lis = eval(input("Enter a list: "))
n = len(lis)
count = 0
for i in range(0, n):
    num = lis[i]
    for j in range(2, int(num**0.5)+1,1):
        if(num % j == 0):
            count += 1
    if(count>1):
        print('False')
        break
if(count == 1):
    print('True')
    

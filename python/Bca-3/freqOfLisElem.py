lis = eval(input("Enter a list: "))
exp = lis[:]
n = len(lis)
count = 0

while(len(exp) > 0):
    temp = exp[0]
    j = 0
    while(j < len(exp)):
        if(exp[j] == temp):
            count += 1
            exp.pop(j)
            continue
        j+=1
    
    print("Freq of ",temp," : ", count)
    if(count == 1):
        print(temp, " is unique")
    else:
        print(temp, " is duplicate")
    count = 0

s = input("Enter a string: ")
lis = s.split(" ")
n = 0
great = ""
flag = 0
for i in lis:
    for j in i:
        if(j in "aeiouAEIOU"):
            flag = 1
            break
    if(flag == 1):
        flag = 0
    else:
        if(len(i) > n):
            n = len(i)
            great = i
    
print(great)

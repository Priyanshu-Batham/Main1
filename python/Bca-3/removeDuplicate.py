lis = eval(input("Enter a list: "))
elt = eval(input("Enter an elemetn: "))
ans = []
for i in lis:
    if(i != elt):
        ans.append(i)

print(ans)

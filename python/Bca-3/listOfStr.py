strlis = eval(input("Enter a list of string: "))
ans = []
for i in strlis:
    string = i[1:-1]
    ans.append(string)

print(ans)

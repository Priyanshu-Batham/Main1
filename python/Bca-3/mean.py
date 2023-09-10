l = eval(input("Enter a list: "))
add = 0
for i in range(0, len(l)):
    add += l[i]

print("mean:", add/len(l))

d1 = eval(input("Enter a dictionary: "))
d2 = eval(input("Enter another dictionary: "))

for i in d2.items():
    if d1[i[0]]not in d2:
        d1[i[0]]=i[1]
    else:
        d1[i[0]]*=2
        
print(d1)

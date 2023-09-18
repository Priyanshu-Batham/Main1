tup = eval(input("Enter a tuple of pairs: "))
ct = 0

for i in tup:
    if(i[0]%2 == 0 and i[1]%2 == 0):
        ct+=1
print(ct)

d1 = eval(input("Enter dictionary 1: "))
d2 = eval(input("Enter dictionary 2: "))
d3 = eval(input("Enter dictionary 3: "))

d4 = {}

for i in d1.items():
    d4[i[0]] = i[1]

for i in d2.items():
    d4[i[0]] = i[1]

for i in d3.items():
    d4[i[0]] = i[1]

print(d4)
               

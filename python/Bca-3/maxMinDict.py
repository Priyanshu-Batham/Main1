d = {
    1: 1,
    2: 2,
    3: 3,
    4: 4,
    5: 5
}

val = list(d.values())
maxi = val[0]
mini = val[0]

for i in val:
    if(i > maxi):
        maxi = i

for i in val:
    if(i < mini):
        mini = i

print(f"max : {maxi}\nmin : {mini}")

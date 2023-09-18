d = {
    0:"HELLO",
    1:"HELLO",
    2:"python",
    3:"python",
}

ans = {}
flag = 0
key = list(d.keys())
val = list(d.values())
n = len(val)

for i in range(0, n):
    for j in range(i+1, n):
        if(val[i] == val[j]):
            flag = 1
            break
    if(flag == 1):
        flag = 0
    else:
        ans[key[i]] = val[i]

print(ans)

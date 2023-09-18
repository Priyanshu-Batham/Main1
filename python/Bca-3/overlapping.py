d1 = {
    1:"hello",
    2:"abc",
    3:"python"
}

d2 = {
    2:"priyanshu",
    3:"batham",
    4:"c#"
}

ans = []
lis = d1.keys()
for i in lis:
    if(i in d2):
        ans.append(i)

print(ans)

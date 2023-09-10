string = input("Enter a string: ")
ans = ''

for i in range(0, len(string)-1):
    if(string[i] != string[i+1]):
        ans+=string[i]
ans+=string[-1]
print(string)
print(ans)

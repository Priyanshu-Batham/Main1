s = input("Enter a string: ")
n = len(s)

for i in range(0, n):
    if(ord(s[i]) > 96 and ord(s[i]) < 123):
        s = s[0:i]+chr(ord(s[i])-32)+s[i+1:]
print(s)

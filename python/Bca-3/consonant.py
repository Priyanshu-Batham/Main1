string = input("Enter a string")
vowels = "aeiou"
maxi = 0
ct = 0
flag = True

for i in string:
    for j in vowels:
        if i == j:
            flag = False
            break
    if flag:
        ct += 1
    else:
        flag = True
        maxi = max(maxi, ct)
        ct = 0
maxi = max(maxi, ct)
print(maxi)
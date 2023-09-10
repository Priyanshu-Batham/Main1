email = input("Enter Email:")
valid = "@gmail.com"
ct = -10
flag = 1
for i in valid:
    if email[ct] != i:
        flag = 0
        break
    ct += 1

if flag:
    print("Valid Email")
else:
    print("Invalid Email")
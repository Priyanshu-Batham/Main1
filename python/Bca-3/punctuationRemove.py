string = input("Enter a string: ")
ch = 0
for i in string:
    ch = ord(i)
    if (ch >= 65 and ch <= 90) or (ch >= 97 and ch <= 122) or i == ' ':
        print(i, end = '')




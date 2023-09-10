string = input("Enter a string: ")
string += " "
n = len(string)

for i in range(0, n):
    ran = ord(string[i])

    #for upper case
    if(ran > 64 and ran < 91):
        string = string[0:i] + chr(ran + 32) + string[i+1:]
    elif(string[i] == ' '):
        continue
    #for lower case
    else:
        string = string[0:i] + chr(ran - 32) + string[i+1:]

print(string)

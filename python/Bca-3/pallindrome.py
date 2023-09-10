string = input("Enter a string: ")
string2 = string

for i in range(len(string)-1,0,-1):
    string = string + string2[i]
string += string2[0]
print(string)

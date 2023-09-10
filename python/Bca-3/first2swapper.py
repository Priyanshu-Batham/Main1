string1 = input("Enter a string")
string2 = input("Enter another string")

string3 = string2[0:2] + string1[2:] + ' ' + string1[0:2] + string2[2:]
print(string3)
string = input("Enter a string")
n = len(string)
newString = ""

for i in range(0,n,2):
    newString = newString + string[i]

print(newString)
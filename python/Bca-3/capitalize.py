string = input("Enter a string: ")

if string[0].islower():
    string = string[0].capitalize() + string[1:]

for i in range(1, len(string)):
    if string[i - 1] == " ":
        string = string[:i] + string[i].capitalize() + string[i + 1:]

print(string)

string = input("Enter a string: ")
string = " "+string

for i in range(1, len(string)):
    if string[i - 1] == " ":
        string = string[:i] + string[i].capitalize() + string[i + 1:]

print(string)

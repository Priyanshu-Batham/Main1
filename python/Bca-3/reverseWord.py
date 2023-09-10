string = input("Enter a string: ")
string = ' ' + string + ' '
n = len(string)
space = []
for i in range(0, n):
    if(string[i] == ' '):
        space.append(i)

print(space)

for i in range(0, len(space)-1):
    string = string[0:space[i]+1] + string[space[i+1]-1:space[i]:-1] + string[space[i+1]:]
print(string)

string = input("Enter a string: ")
ch = input("Enter the character to find: ")
count = 0

for i in range(0, len(string)):
    if string[i] == ch:
        print("index:",i)
        count += 1
print("count: ",count)

n = int(input("Enter a number:"))

for i in range(0,n):
    for j in range(0, i+1):
        char = 'A'
        print(chr(ord(char)+j), end = ' ')
    print('')

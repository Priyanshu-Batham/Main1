string = input("Enter a string: ")
n = len(string)
l = []
for i in range(0,26):
    l.append(0)

for i in string:
    l[ord(i)-ord('a')] += 1

for i in range(0,26):
    if l[i] == 1:
        print(chr(i + ord('a')), end = ' ')

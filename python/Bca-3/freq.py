string = input("Enter a string: ")

l1=[]
for i in  range(0,26):
    l1.append(0)

for i in string:
    l1[ord(i)- ord('a')] += 1

for i in range (0, len(l1)):
    if(l1[i] != 0):
        print(chr(i + ord('a')), "=", l1[i])



words = eval(input("Enter a list of words: "))
n = len(words)
add = 0
asc = []
for i in range(0, n):
    for j in words[i]:
        add += ord(j) - ord('a') + 1
    asc.append(add)
    add = 0

print(asc)

letterFound = False
wordFound = True

for i in range(0, n):
    for j in range(0, n):
        if(asc[i] == asc[j]):
            for k in words[i]:
                for l in words[j]:
                    if(k == l):
                        letterFound = True
                if(letterFound == False):
                    wordFound = False
                    break
                letterFound = False
            if(wordFound == True):
                print(words[i]," : ",words[j])
            wordFound = True


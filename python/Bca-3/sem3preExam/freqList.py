ogList = [2,5,26,623,63,5,623,2,67]

freq = []
uniq = []
dupl = set() #set because i don't want duplicates to be added again

for num in ogList:
    freq.append(ogList.count(num))

for i in range(len(ogList)):
    if(freq[i] == 1):
        uniq.append(ogList[i])
    else:
        dupl.add(ogList[i])

print(f"Original Array: {ogList}")
print(f"Frequencies: {freq}")
print(f"uniques: {uniq}")
print(f"duplicates: {dupl}")
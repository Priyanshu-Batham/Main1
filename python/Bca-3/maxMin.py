l = eval(input("Enter a list: "))
maxi = l[0]
indmaxi = 0
mini = l[0]
indmini = 0
for i in range(0, len(l)):
    if(maxi < l[i]):
        maxi = l[i]
        indmaxi = i
    if(mini > l[i]):
        mini = l[i]
        indmini = i

print("max element is ",maxi," at index ",indmaxi)
print("min element is ",mini," at index ",indmini)

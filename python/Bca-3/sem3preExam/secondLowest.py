smol = float('inf') # for infinitely large number

list = [534,66,2,2356,7,838,8,5,26,346]

for i in range(len(list)):
    if list[i] < smol:
        smol = list[i]

smallest = smol
print(f"smallest: {smallest}")

smol = float('inf')

for i in range(len(list)):
    if list[i] < smol and list[i] != smallest:
        smol = list[i]

secSmallest = smol
print(f"secSmallest: {secSmallest}")


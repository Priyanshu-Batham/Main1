import math
prime = set()
odd = set()

for i in range(1, 21):
    #odd
    if(i%2 != 0):
        odd.add(i)

    #prime
    flag = 1
    for j in range(2,int(math.sqrt(i)) + 1):
        if(i%j == 0):
            flag = 0
            break
    if(flag == 1):
        prime.add(i)

print("odd set: ", odd)
print("prime set: ", prime)

print(f"\nunion: {odd|prime}")
print(f"intersection: {odd.intersection(prime)}")
print(f"difference: {odd-prime}")
print(f"symmetric-difference: {odd^prime}")

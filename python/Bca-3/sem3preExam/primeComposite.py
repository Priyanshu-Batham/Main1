nums = []

while True:
    num = int(input("Enter a number(-1 to stop): "))
    if num == -1:
        break
    else:
        nums.append(num)

def isPrime(num):
    if num < 2:
        return 0
    
    for i in range(2, int(num**0.5)+1):
        if num % i == 0:
            return 0
        
    return 1

primes = list(filter(isPrime, nums))
composites = [x for x in nums if x not in primes]

print(f"primes: {primes}")
print(f"composites: {composites}")
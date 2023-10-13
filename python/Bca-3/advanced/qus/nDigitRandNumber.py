from random import randint

n = int(input("Enter the digit of random number: "))

def rangeGen(n, limits = [1,10]):
    #base case
    if(n == 1):
        limits[1] -= 1
        return limits
     
    limits[0] *= 10
    limits[1] *= 10
    return rangeGen(n-1, limits)

ran = rangeGen(n)
result = randint(ran[0], ran[1])
print(result)
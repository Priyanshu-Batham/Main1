#b - bigger number
#s - smaller number
def gcd(b, s):
    if(s == 0):
        return b
    return gcd(s, b%s)

print(gcd(33,12))    
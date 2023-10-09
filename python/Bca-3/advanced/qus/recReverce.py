num = int(input("Enter a number to reverse: "))
len = len(str(num))
#start ans with 0

def rev(num, len, ans):
    if(len == 0):
        return ans
    
    digit  = num % 10
    num = num // 10
    for i in range(0, len-1):
        digit *= 10
    
    ans += digit
    return rev(num, len-1, ans)


print(rev(num, len, 0))
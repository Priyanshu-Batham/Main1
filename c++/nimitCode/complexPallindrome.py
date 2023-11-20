def pallindrome(number):
    num = number
    rev = 0

    while (num > 0):
        digit = int(num % 10)

        rev *= 10
        rev += digit
        num = int(num / 10)
        # print(f"num = {num}")

    return True if number == rev else False
    
    

n = int(input("Enter number of digits: "))

num = 9
for i in range(n - 1):
    num*=10
    num+=9

for i in range(num,1,-1):
    for j in range(num,1,-1):
        prod = i*j

        if(pallindrome(prod)):
            print(prod)
            flag = 1
            break
    if(flag == 1):
        break

# print(pallindrome(n))
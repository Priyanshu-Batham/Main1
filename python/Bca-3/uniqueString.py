string = input("Enter a string: ")
dp = []
flag = 1
for i in range(0, 27):
    dp.append(0)

for i in range(0, len(string)):
    if(string[i] != ' '):
        dp[ord(string[i])-ord('a')] += 1

for i in range(0, 26):
    if(dp[i] > 1):
        print("Not Unique")
        flag = 0
        break

if(flag):
    print("UNIQUE STRING")

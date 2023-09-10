n = int(input("Enter a number:"))
a = n
s = 0

for i in range(1,a+1):
    opr = i
    fact = 1
    if(i!=1):
        while(opr>1):
            fact*=opr
            opr-=1
    s += 1/fact

print(s)

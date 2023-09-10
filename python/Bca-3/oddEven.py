n = int(input("Enter a number:"))
m = int(input("Enter the divisor:"))

for i in range(1, n+1):
    if(i%m == 0):
        print(i)
        if(i%2 == 0):
            print("Even")
        else:
            print("Odd")

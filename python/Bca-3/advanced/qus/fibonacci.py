n=int(input('Enter upto which fibonacci series is to be printed:'))
fibo = lambda x,y: x+y 
x = 0
y = 1
print(x, end = " ")
print(y, end = " ")

for i in range(0, n-2):
    z = fibo(x, y)
    print(z, end = " ")
    x = y
    y = z
    


a = 10
def f():
    print("inside",a)
    global b 
    b = 11
    
f()
print("outside", b)
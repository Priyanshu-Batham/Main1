isEven = lambda num: True if num%2==0 else False

l1 = [1,2,3,4]
l2 = filter(lambda num: True if num%2==0 else False, l1)
for i in l2:
    print(i)
l1 = [1,2,3,4,5,6,7,8,9,10]
even = list(filter(lambda num: True if num%2==0 else False, l1))
odd = list(filter(lambda num: True if num%2!=0 else False, l1))
print(even)
print(odd)
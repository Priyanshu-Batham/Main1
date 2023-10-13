from random import randint

''' here (20, 200) *5 represents 
range of (100-1000) but they 
will always be divisible by 5'''

numList = [randint(20,200)*5 for i in range(0,3)]
print(numList)
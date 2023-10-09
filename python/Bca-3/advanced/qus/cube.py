#using listComprehension
print([x**3 for x in range(1,31) ])

#using map------>
#first create a normal list
l1 = [x for x in range(1, 31)]
#now use map function
l2 = list(map(lambda x: x**3,l1))
print(l2)
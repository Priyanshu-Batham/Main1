import functools as ft
l1 = [1,2,3,4]

l2 = ft.reduce(lambda x, y: x+y, l1)
print(l2)
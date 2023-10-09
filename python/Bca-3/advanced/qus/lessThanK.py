l1 = [1,2,3,4,5]
def lessThan(list, k):
    return [x for x in list if x < k]
print(lessThan(l1, 4))

#using lambda
print((lambda list, k: [x for x in list if x < k])(l1, 6))

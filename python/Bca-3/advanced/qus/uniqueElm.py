l1 = [1,2,2,3,3,4]
l2 = []
def isUnique(x):
    for i in l2:
        if x == i:
            return False
    l2.append(x)
    return True
l3 = list(filter(isUnique, l1))
print(l3)
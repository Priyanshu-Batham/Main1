list = [i for i in range(10) if(i%2==0)and (i>2)]
print(list)

list2 = ["yes" if x >= 5 else "no" for x in range(10) if x < 7]
print(list2)
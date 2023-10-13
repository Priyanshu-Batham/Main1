from random import randint

start = int(input("Enter the starting range: "))//2
end = int(input("Enter the ending range: "))//2

list = [randint(start+1, end)*2 for i in range(5)]
print(list)
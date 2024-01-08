amount = int(input("Enter prize amount: "))
position = 0
while(amount):
    position += 1
    prize = position**3
    amount -= prize
print(position)

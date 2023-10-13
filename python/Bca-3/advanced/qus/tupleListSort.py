from random import randint

subjects = ["english", "science", "maths", "social_science"]
result = [(sub, randint(0, 100))  for sub in subjects]
sorted_result = sorted(result, key = lambda x: x[1])
print(sorted_result)
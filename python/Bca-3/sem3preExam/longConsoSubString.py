string = input("Enter a string: ")
words = string.split()

def isConsonantWord(word):
    for letter in word:
        if letter in 'aeiouAEIOU':
            return 0
    return 1

consonantWords = filter(isConsonantWord, words)
consonantWords = sorted(consonantWords, key = lambda word: len(word))
print(f"Longest Consonant Substring: {consonantWords[-1]}")

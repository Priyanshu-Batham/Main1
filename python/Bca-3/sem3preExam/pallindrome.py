def isPallindrome(string):
    return str(string) == ''.join(reversed(str(string)))

string = input("Enter a string: ")
print(isPallindrome(string))

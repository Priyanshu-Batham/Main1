class Error(Exception):
    pass

class ErrorProMax(Error):
    def __init__(self):
        print("Obj of ErrorProMax is created")
    
try:
    num = int(input("Enter a number greater than 10: "))
    if num < 11:
        raise ErrorProMax
    
except ErrorProMax as EPM:
    print("Very Big Error 😧")

else:
    print("Thanks for the number")

finally:
    print("Anyways have this 🍫")
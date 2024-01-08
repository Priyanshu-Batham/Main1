qus = ["what is your name","how old are you", "what is India's capital"]
options = ["priyanshu, harsh","19, 20", "china delhi mumbai"]
answer = ["harsh","19", "delhi"]
number = len(qus)

def quiz(qus, options, answer, number):
    point = 0
    for i in range(0, number):
        print(qus[i])
        print(options[i])
        userAnswer = input("Enter your answer: ")

        if(userAnswer == answer[i]):
            print("Correct answer")
            point += 1
            # point = point + 1
        
        else:
            print("wrong answer")
        
        print("\n")

    print(f"Your Score is: {point}/{number}")

quiz(qus, options, answer, number)
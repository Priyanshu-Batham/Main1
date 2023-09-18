marks = eval(input("Enter the marks of three subjects of 5 students:"))
n = len(marks)

for i in range(0, n):
    print("Student",i+1," = ", (marks[i][0]+marks[i][1]+marks[i][2])/3)

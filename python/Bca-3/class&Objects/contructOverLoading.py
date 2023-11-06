''' create a class student and enter the id , name and marks and display 
the name and the percentage of the student. Non- Parameterized and Parameterized constructor'''

class Student:
    per=0 

    def __init__(self, name = None, marks = None, id = None):
        if(name == None):
            print("Enter name and age and id")
        elif(marks == None):
            print("Enter marks as well as id")
        elif(id==None):
            print("Enter id please")
        else:
            self.id = id
            self.name = name
            self.marks = marks
            self.per = sum(self.marks) / (len(self.marks)*50)*100
        

stu = Student("priyanshu" , [10,20,30], 17)
print(f"{stu.per}%")
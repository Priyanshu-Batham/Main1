#utility functions

#creating menu
def menu():
    print("")
    print("What to DO?")
    print("1: ADD DATA")
    print("2: UPDATE DATA")
    print("3: DELETE DATA")
    print("4: TOP 5 SCORERS")
    print("5: EXIT")
    choice = input("Enter the choice: ")
    return choice

#add record 
def add():
    print("")
    stuId = input("Enter ID: ")
    name = input("Enter name: ")
    contact = input("Enter contact: ")
    percentage = input("Enter percentage: ")

    file = open("stuInfoQ1.txt", "a")
    file.write(f"{stuId} {name} {contact} {percentage}\n")

    print("Data Added")
    file.close()


#update record
def update():
    id = input("Enter ID to update it's info: ")
    name = input("Enter new name: ")
    contact = input("Enter new contact: ")
    percentage = input("Enter new percentage: ")

    file = open("stuInfoQ1.txt", "r+")
    list = file.readlines()
    lineCount = 0
    found = 0

    for record in list:
        elements = record.split()
        if(elements[0] == id):
            found = 1
            break
        else:
            lineCount += 1

    if(found):
        list[lineCount] = f"{id} {name} {contact} {percentage}\n"
        file.seek(0, 0)
        file.writelines(list)
        print("record updated")
    
    else:
        print("No record found")
    
    file.close()



#delete record
def delete():
    id = input("Enter ID to delete: ")
    file = open("stuInfoQ1.txt", "r+")
    list = file.readlines()
    lineCount = 0
    found = 0

    for record in list:
        elements = record.split()
        if(elements[0] == id):
            found = 1
            break
        else:
            lineCount += 1
    
    file.close()

    if(found):
        removedRecord = list.pop(lineCount)
        file = open("stuInfoQ1.txt", "w")
        file.writelines(list)
        print(f"{removedRecord} is deleted")
    
    else:
        print("No record found")
    
    file.close()


#a helper function for sorting
def customSort(record):
    return float(record.split()[3])

#top5 records
def top5():
    file = open("stuInfoQ1.txt", "r")
    list = file.readlines()
    list = sorted(list, key = customSort, reverse= True)
    if (len(list) >= 5):
        for i in range(5):
            print(list[i])
    else:
        print(list)
        for i in list:
            print(i)

    file.close()

#---------------------------------------------------------------->>>>>>>>>>>
#driving the menu
while(True):
    choice = menu()

    if(choice == '1'):
        add()
    elif(choice == '2'):
        update()
    elif(choice == '3'):
        delete()
    elif(choice == '4'):
        top5()
    elif(choice == '5'):
        break
    else:
        print("Enter valid choice")
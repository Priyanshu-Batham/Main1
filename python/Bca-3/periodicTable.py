#<------------declaring all dataStructures and utilities----------->
sortedAtNo = []
perTab = []
propDict = {
    1: "Metals",
    2: "Metalloids",
    3: "Non Metals",
    4: "Recently Discovered"
}

while(True):
    #<------------------------------take inputs from the user---------------------------->
    sym = input("Enter the symbol name: ")
    atno = int(input("Enter the atomic number: "))
    row = int(input("Enter the row number: "))
    col = int(input("Enter the col number: "))
    print('''
Enter the property of the element:
1: Metal
2: Metalloids
3: Non-Metal
4: Recently Discovered
    ''')
    prop = int(input("Choose: "))
    sortedAtNo.append(atno)

    #<--------------if the element is already present then we won't add it------------------>
    isAlreadyPresent = False
    for i in perTab:
        if(i[0] == sym or i[1] == atno or (i[2]==row and i[3] == col)):
            isAlreadyPresent = True

    if(isAlreadyPresent == True):
        print(f"Cannot Add symbol {sym}")
        isAlreadyPresent = False
    else:
        elt = []
        elt.append(sym)
        elt.append(atno)
        elt.append(row)
        elt.append(col)
        elt.append(propDict[prop])
        perTab.append(elt)

    #<----------------If user wants to add more elements?--------------------->
    print(f'''
1: ADD MORE ELEMENTS
2: DISPLAY 
    ''')
    choice = int(input("Choice: "))
    if(choice != 1):        
        break

    
#<--------DISPLAYING THE INFORMATION---------->
if(choice == 2):
    while(True):
        print('''
1: DISPLAY AN ELEMENT'S INFO
2: DISPLAY ELEMENTS OF A PROPERTY
3: DISPLAY ALL ELEMENTS
4: DISPLAY ELEMENTS OF A ROW OR COLUMN
5: EXIT
        ''')

        displayChoice = int(input("Choice: "))
        #----------------------
        if(displayChoice == 1):
            symbol = input("Enter Symbol Name: ")
            for elt in perTab:
                if(elt[0] == symbol):
                    print(elt)
                    
        #----------------------       
        elif(displayChoice == 2):
            print('''
1: Metals
2: Metalloids
3: Non Metals
4: Recently Discovered
            ''')
            _property = int(input("Choose: "))

            for elt in perTab:
                if(elt[4] == propDict[_property]):
                    print(elt)
                    
        #-----------------------
        elif(displayChoice == 3):
            sortedAtNo = sorted(sortedAtNo)
            for atomicity in sortedAtNo:
                for elt in perTab:
                    if(elt[1] == atomicity):
                        print(elt)
            
            
        #-----------------------  
        elif(displayChoice == 4):
            print('''
1: Row
2: Column
''')
            rowColChoice = int(input("Choose: "))
            if(rowColChoice == 1):
                location = int(input("Enter Row number: "))
                for elt in perTab:
                    if(elt[2] == location):
                        print(elt)
                        
            elif(rowColChoice == 2):
                location = int(input("Enter Column number: "))
                for elt in perTab:
                    if(elt[3] == location):
                        print(elt)

        #-----------------------
        elif(displayChoice == 5):
            break

print("ThankYou For Using Periodic Table Program")



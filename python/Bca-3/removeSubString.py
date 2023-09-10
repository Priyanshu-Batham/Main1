string = input("Enter a string")
subString = input("Enter the substring")

begin, end = 0,0
i,j = 0,0
flag = 1

while(i < len(string) and j < len(subString)):
        if(string[i] == subString[j]):
            begin = i
            
            if(i+len(subString) <= len(string)):
                for ind in range(0,len(subString)):
                    if(string[i+ind] != subString[j+ind]):
                        flag = 0
                        break;

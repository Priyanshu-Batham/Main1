string = input("Enter a string: ")
string += ' '
key = 'blue'
#blue bottle is in blue bag lying on blue carpet
ind = string.find(key)
while(ind != -1):
    string = string[0:ind] + 'red' + string[ind+4:]   
    ind = string.find(key)

print(string)
    

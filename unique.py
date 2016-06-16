

def checkUnique(unique):
    if(len(unique) > 256):
        return False
    else:
        for x in range(0,len(unique)):
            if(unique[x] in dictionary.keys()):
                return False
            else:
                dictionary[unique[x]] = 1
    return True
        

unique = input("Please enter a string")
dictionary = {}
if(checkUnique(unique)):
    print("This string contains all unique characters")
else:
    print("This string doesn't contain all unique characters")

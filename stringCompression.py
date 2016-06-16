def compressString(string):
    
    if(len(string) < 2):
        return false
    compressedString = ""
    lastChar = string[0]
    reps = 0
    for x in range(0,len(string)):
        if(string[x] == lastChar):
            reps += 1
        else:
            compressedString += lastChar + str(reps)
            reps = 0
        lastChar = string[x]
    #safety check for edge case
    if(len(compressedString) >= len(string)):
        return False
    else:
        return compressedString

string = input("Please enter a string for compression")
while(string != "exit"):
    result = compressString(string)
    if(result == False):
        print(string + " couldn't be compressed any smaller")
    else:
        print(string + " was compressed down to " + result)
    string = input("Please enter a string for compression")


#Questions to ask interviewer:
#Does the sequence need to stay in order?
#

def compressString(compressing):
    #edge case for length
    if(len(compressing) <= 2):
        return False
    #initializations
    compressedString = ""
    lastChar = compressing[0]
    reps = 1
    isFirst = True
    #aaabb = a3b2 < 5 letters
    for x in range(0,len(compressing)):
        if(compressing[x] != lastChar or x == len(compressing)):
            compressedString +=  lastChar + str(reps)
            reps = 1
            isFirst = True
        else:
            if(isFirst):
                isFirst = False
            else:
                reps +=1
        lastChar = compressing[x]
    compressedString += lastChar + str(reps)
    #safety check for edge case
    if(len(compressedString) >= len(compressing)):
        return False
    else:
        return compressedString

string = str(input("Please enter a string for compression"))
while(string != "exit"):
    result = compressString(string)
    if(result == False):
        print(string + " couldn't be compressed any smaller")
    else:
        print(string + " was compressed down to " + result)
    string = str(input("Please enter a string for compression or exit to quit the program"))


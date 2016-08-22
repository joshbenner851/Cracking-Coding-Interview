#substring
# Given two strings, s i and s2, write code to check,
# if s2 is a rotation of s1
# (e.g.,"waterbottle"is a rota- tion of "erbottlewat")

#Check if sub2 is a substring of sub1
def checkSubString(sub1,sub2):
	if(len(sub2) == 1 and sub2 == sub1[0]):
			return True
	elif(len(sub2) > len(sub1)):
		return False
	# while(counter <= len(sub1)):
	# 	for x in (0,len(sub1)):
	# 		if()
	# 		if(sub2[counter] == sub1[x]):
	# 			if(sub2[counter+1] != sub2[x+1]):
	# 				return False
	# return True
	countX = 0
	countY = 0
	while(countX <= len(sub2)):
		isInString = False
		while(countY <= len(sub1)):
			if(sub2[countX] == sub1[countY]):
				isInString = True
				countX += 1
				break

		if(!isInString):
			return False
		countY = 0

sub1 = str(input("Please enter a string for rotation check"))
while(sub1 != "exit" or sub2 != "exit"):
	sub2 = str(input("Please enter the 2nd string for rotation check"))
    result = checkSubstring(sub1,sub2)
    if(result == False):
        print(sub2 + " isn't a substring of " + sub1)
    else:
        print(sub2 + " is a rotation of " + sub1)
    sub1 = str(input("Please enter a string for rotation or exit to quit the program"))


#search through string 2 for letter 1 of string 1
#check for continuation
#loop back through if neccessary
#
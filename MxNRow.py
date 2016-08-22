# Write an algorithm such that if an element in an MxN matrix is 0,
# its entire row and column are set to 0.


def setZeroes(matrix):
	columns = []
	rows = []
	for x in range(0,len(matrix)):
		for y in range(0,len(matrix[x])):
			if(matrix[x][y] == 0):
				columns.append(x)
				rows.append(y)

	for x in range(0,len(matrix)):
		for y in range(0,len(matrix[x])):
			if(x in columns or y in rows):
				matrix[x][y] = 0
	return matrix


matrix = [[1,2,0],[4,0,5],[1,1,1]]
print(setZeroes(matrix))
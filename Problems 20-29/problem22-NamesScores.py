#https://projecteuler.net/problem=22
#nothing too special here. Just read in the files, split into an array, 
#sort, apply scoring.

file = open('p022_names.txt', 'r') 
names = sorted(file.read().replace("\"", "").split(","))

pos = 1
score = 0
for name in names:
	points = 0
	for char in name:
		points += (ord(char) - (ord('A') - 1))

	score += (points * pos)
	pos += 1

print score
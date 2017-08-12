#https://projecteuler.net/problem=17
from num2words import num2words

# Count from 1 to 1000, use num2Words to convert it to a word, remove
# spaces and hyphens, and sum it all up

charCount = 0
for i in range(1,1001):
	charCount += len(num2words(i).replace(" ", "").replace("-",""))

print charCount

#https://projecteuler.net/problem=21
#in this problem some optimizations timewise are possible, such as storing the results
#of divisors to not repeat calculations in memory, or adding both amicable number pairs
#at once and then noting not to the second one but the range is so small it really
#isn't necessary
#it's just done with brute force

def divisorsSum(n):
	d_sum = 0
	for i in range(1,n/2 + 1):
		if(n % i == 0):
			d_sum += i
	return d_sum

a_sum = 0
for i in range(1,10000):
	d = divisorsSum(i)
	if(i != d):
		if(divisorsSum(d) == i):
			a_sum += i

print a_sum
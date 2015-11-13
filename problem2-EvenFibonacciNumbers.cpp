//https://projecteuler.net/problem=2
#include <iostream>

int fibAdder(int fib1, int fib2, int sum){
	if(fib2 > 4000000) return sum;
	if(fib2 % 2 == 0) sum += fib2;
	return fibAdder(fib2, fib1 + fib2, sum);
}

int main(){
	std::cout << fibAdder(1, 2, 0);
}

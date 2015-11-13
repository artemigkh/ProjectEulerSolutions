// https://projecteuler.net/problem=6
#include <iostream>

int main(){
	//use summation formula : n(n+1)/2
	int squareOfSum = 100/2 * (100 + 1) * 100 / 2 * (100 + 1);
	//use sum of squares formula: n(n+1)(2n+1)/6
	int sumOfSquares = (100 * (100 + 1) * (2 * (100) + 1)) / 6;
	//substract them
	std::cout << squareOfSum - sumOfSquares;
}

#include <iostream>

/*
 * To solve this problem, we must simply find the prime factorization of this
 * number and multiply it together.
 * our prime factorization is 2^4 * 3^2 * 5 * 7 * 11 * 13 * 17 * 19
 * since all the non prime numbers can be made from combinations of primes from the sequence
 * above.
 * 20 = 2^2 * 5
 * 18 = 3^2 * 2
 * 16 = 2^4
 * 15 = 3 * 5
 * 14 = 2 * 7
 * 12 = 2^2 * 3
 * 10 = 2 * 5
 * 9 = 3^2
 * 8 = 2^3
 * 4 = 2^2
 */

int main(){
	std::cout << 2 * 2 * 2 * 2 * 3 * 3 * 5 * 7 * 11 * 13 * 17 * 19;
}
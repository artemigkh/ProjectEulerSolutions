// https://projecteuler.net/problem=3
#include <iostream>

/*
 * this algorithm finds the largest prime divisor by removing all the previous prime factors
 * with repeated division, so when the number of interest reaches 1 it will have to have
 * been divided by the largest prime factor. That number is then printed.
 */

int main(){
	long long int cn = 600851475143; //current number that we are finding prime factor of
	long long int cd = 1; //current divisor
	while(cn != 1){
		cd++;
		while(cn % cd == 0){
			cn /= cd;
		}		
	}
	std::cout << cd;
}

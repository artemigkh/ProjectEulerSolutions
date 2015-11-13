// http://projecteuler.net/probem=10

#include <iostream>

/*
 * Uses sieve of eratosthenes to find all primes less than 2000000 then sums them
 */

const int MAX = 2000000;

int main(){
	bool isPrime[MAX];
	long int sum = 0;

	for(int i = 2; i < MAX; i++){
		isPrime[i] = true;
	}

	for(int i = 2; i * i < MAX; i++){
		if(isPrime[i]){
			for(int j = i * i; j < MAX; j += i){
				isPrime[j] = false;
			}
		}
	}

	for(int i = 2; i < MAX; i++){
		if(isPrime[i]) sum += i;
	}

	std::cout << sum;
}

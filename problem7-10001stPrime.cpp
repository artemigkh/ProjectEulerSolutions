#include <iostream>

/*
 * it is a well knowm mathematical fact that the nth prime number is < n * ln(n * ln(n))
 * for n > 5. Therefore, the 10001st prime number is smaller than 114320.
 * this program uses the sieve of eratosthenes to compute all primes up to that point
 * and outputs the 10001st one.
 */
const int MAX = 114320;

int main(){
	bool isPrime[MAX];
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

	int a = 1, p = 10001;
	while(p >= 1){
		a++;
		if(isPrime[a]) p--;	
	}
	std::cout << a;
}
//http://projecteuler.net/problem=12
#include <iostream>

/*
 * This algorithm finds the number of divisors by using the property that the 
 * the number of divisors a number has is equal to (m1 + 1)(m2 + 1)...(mk + 1)
 * where mi corresponds to the exponents in the prime factorization
 * p1^m1 * p2^m2 * ... * pk^mk.
 * It starts at the smallest prime number and repeatedly divides until there is no 
 * whole number remainder, then increments by one and again repeatedly divides
 * until it reaches the biggest prime factor (the divident becomes 1)
 * this ensures that the number is only divided by primes the same way the sieve
 * of eratosthenes does, by eliminating the smaller prime divisors of any number.
 */

int numDivisors(int n){
    int num_divisors = 1;
    int cd = 1; //current divisor
    while(n != 1){
        cd++;
        int m = 0; // number of times this divisor occurs in the prime factorization
        while(n % cd == 0){
            m++;
            n /= cd;
        }
        num_divisors *= (m + 1);
    }
    return num_divisors;
}

int main(){
    int n = 2;
    int triangle = 3;
    while(numDivisors(triangle) <= 500){
        n++;
        triangle += n;
    }
    std::cout << triangle;
}


// http://projecteuler.net/probem=9

#include <iostream>
#include <cmath>

/*
 * In order to avoid many loop iterations, this problem will first be mathematically 
 * simplified. We start with 2 equations, (1) a^2 + b^2 = c^2 and (2) a + b + c = 1000.
 * We rearrange (1) to c = sqrt(a^2 + b^2) and sub into (2): a + b + sqrt(a^2 + b^2) = 1000.
 * Rearrange 2 in the form sqrt(a^2 + b^2) = 1000 - a - b and square both sides to obtain
 * a^2 + b^2 = a^2 + 2ab - 2000a + b^2 - 2000b + 1000000, then simplify this further to
 * 0 = 2ab - 2000a - 2000b + 10000. Rearrange for a to get
 * a = (-2000b + 1000000) / (2000 - 2b).
 * Now that we have an equation for a in terms of b and an equation for c in terms of a and b
 * we simply have to iterate through b to find a and c and check that all other conditions hold
 */

int findProduct(){
	for(int b = 1; b < 1000; b++){
		int a = (-2000 * b + 1000000) / (2000 - 2 * b);
		if(a > b) continue;
		int c = sqrt(a * a + b * b);
		if(a + b + c == 1000) return a * b * c;
	}
}

int main(){
	std::cout << findProduct();
}

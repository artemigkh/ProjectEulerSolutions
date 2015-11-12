#include <iostream>

//determines if the input n is a palindrome
bool isPalindrome(int n){
	if(n % 10 == 0) return false;
	int tmp = n, rev = 0;
	while(tmp > 0){
		rev = rev * 10 + tmp % 10;
		tmp /= 10;
	}
	return rev == n;
}

int main(){
	int max = 0;
	for(int i = 100; i < 1000; i++){
		for(int j = i; j < 1000; j++){ //set j = i to avoid duplicate multiplications
			int ij = i * j;
			if(ij > max && isPalindrome(ij)) max = ij;
		}
	}
	std::cout << max;
}
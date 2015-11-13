//https://projecteuler.net/problem=1
#include <iostream>

int main(){
	int sum;
	for(int i = 3; i < 1000; i++){
		if(i % 3 == 0 || i % 5 == 0) sum += i;
	}
	std::cout << sum;
}

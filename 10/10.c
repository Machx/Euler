#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//this is a less than elegant solution
//it works, but probably could be done better

bool isPrime(unsigned int num) {
	if(num <= 1) return false;
	unsigned int i;
	for (i = 2; i*i<=num; i++) {
		if(num % i == 0) return 0;
	}
	return (bool)(i > 0);
}

int main(int argc, char *argv[]) {
	uint64_t total = 0;
	
	for (unsigned int i = 0; i < 2000000; i++) {
		if(isPrime(i)) {
			total += i;
		}
	}
	
	printf("Total is: %llu",total);
}
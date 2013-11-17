#include <stdio.h>
#include <stdbool.h>

bool isPrime(unsigned int num) {
	if(num <= 1) return false;
	unsigned int i;
	for (i = 2; i*i<=num; i++) {
		if(num % i == 0) return 0;
	}
	return (bool)(i > 0);
}

int main(int argc, char *argv[]) {
	unsigned int prime = 0;
	unsigned int primeNum = 0;
	for (unsigned int i = 0; prime != 10001; ++i) {
		if(isPrime(i) == true) {
			prime++;
			primeNum = i;
		}
	}
	printf("10,001st prime number is %i",primeNum);
}

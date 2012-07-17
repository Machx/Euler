#include <stdio.h>

#define MAX_CHECK 100

unsigned int sumOfSquared()
{
	unsigned int sum = 0;
	for (int i = 1; i <= MAX_CHECK; i++) {
		unsigned int isquared = i * i;
		sum += isquared;
	}
	return sum;
}

unsigned int squareOfSum()
{
	unsigned int sum = 0;
	for (int i = 1; i <= MAX_CHECK; i++) {
		sum += i;
	}
	return (sum * sum);
}

int main(int argc, char *argv[]) 
{
	unsigned int difference = squareOfSum(MAX_CHECK) - sumOfSquared(MAX_CHECK);
	
	printf("difference is %u",difference);
	
	return 0;
}
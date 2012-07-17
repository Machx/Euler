#include <stdio.h>
#include <stdbool.h>

#define MAX_CHECK 20

bool checkNum(int num)
{
	for (int i = MAX_CHECK; i > 0; i--) {
		if(num % i != 0) {
			return false;
		}
	}
	return true;
}

int main(int argc, char *argv[]) {
	
	int passing = 0;
	
	for (int i = MAX_CHECK; i < 1000000000; i++) {
		if(checkNum(i) == true){
			passing = i;
			break;
		}
	}
	
	printf("Largest # divisible by all #'s <= %i is %i",MAX_CHECK,passing);
	
	return 0;
}
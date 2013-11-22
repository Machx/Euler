#include <stdio.h>
#include <stdlib.h>

//find a^2 + b^2 = c^2
//where a + b + c == 1000
//and a < b < c

#define kMaxNum 999

int main(int argc, char *argv[]) {
	int finalA = 0;
	int finalB = 0;
	int finalC = 0;
	
	for (int aCounter = 0; aCounter < 1000; aCounter++) {
		for (int bCounter = 0; bCounter < 1000; bCounter++) {
			for (int cCounter = 0; cCounter < 1000; cCounter++) {
				if( (aCounter < bCounter) && (bCounter < cCounter)) {
					if(((aCounter * aCounter) + (bCounter * bCounter)) == (cCounter * cCounter)) {
						if((aCounter + bCounter + cCounter) == 1000) {
							finalA = aCounter;
							finalB = bCounter;
							finalC = cCounter;
						}
					}
				}
			}
		}
	}
	
	printf("final results A:%i B:%i C:%i\n",finalA,finalB,finalC);
	
	int product = finalA * finalB * finalC;
	
	printf("proudct of 3 numbers: %i\n",product);
}

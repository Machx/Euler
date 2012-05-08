//
//  main.c
//  3
//
//  Created by Colin Wheeler on 5/8/12.
//  Copyright (c) 2012. All rights reserved.
//

/*
 The prime factors of 13195 are 5, 7, 13 and 29.
 
 What is the largest prime factor of the number 600851475143 ?
 */

#include <stdio.h>

int main(int argc, const char * argv[])
{
	long long i, sqi;
	long long value, large = 600851475143LL;
	long long max = 0LL;
	
	i = 2LL;
	sqi = 4LL;
	for (value = large; sqi <= value; sqi += 2LL * i++ + 1LL) {
		while (value % i == 0LL) {
			value /= (max=i);
		}
	}
	
	if (value != 1LL && value != large) {
		max = value;
	}
	if (max == 0LL) {
		max = large;
	}
	printf("%lld max",max);
	
	return 0;
}


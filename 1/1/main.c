//
//  main.c
//  1
//
//  Created by Colin Wheeler on 5/8/12.
//  Copyright (c) 2012. All rights reserved.
//

#include <stdio.h>

static const int kConstNo = 4;

int main(int argc, const char * argv[])
{
	int sum = 0;
	for (int i = 0; i < 1000; i++) {
		if (i % 3 == 0 ||
			i % 5 == 0) {
			sum += i;
		}
	}
	printf("sum is: %i",sum);
    return 0;
}


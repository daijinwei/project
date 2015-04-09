#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	long i = 0;
	clock_t start, finish;
	double duration;
	printf("Time to do %ld empty loops is \n", i);
	start = clock();
	printf("start %ld \n", start);

	while (i < 10000000000) {
		i++;
	}

	finish = clock();
	printf("finish %ld \n", finish);
	duration = (double)(finish - start)/CLOCKS_PER_SEC;
	printf("duration %f\n", duration);
}


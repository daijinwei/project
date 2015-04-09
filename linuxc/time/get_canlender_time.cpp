#include <time.h>
#include <stdio.h>

int main()
{
	struct tm * ptr;
	time_t 	now;
	now = time(NULL);
	printf("The Canlender Time is now is %ld\n", now);
	return 0;
}

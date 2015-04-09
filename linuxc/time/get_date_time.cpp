#include <time.h>
#include <stdio.h>

int main()
{
	struct tm *ptr;
	struct tm *local;
	time_t 	now;
	now = time(NULL);
	printf("The Canlender Time is now is %ld\n", now);
	local = localtime(&now);
	printf("Local house is: %d\n", local->tm_hour);
	local = gmtime(&now);
	printf("UTC house is: %d\n", local->tm_hour);
	return 0;
}

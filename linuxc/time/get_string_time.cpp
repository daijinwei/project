#include <time.h>
#include <stdio.h>

int main()
{
	struct tm *ptr;
	struct tm *local;
	time_t 	now;
	now = time(NULL);
	char *ptime = ctime(&now);
	printf("ptime is %s\n", ptime);
	return 0;
}

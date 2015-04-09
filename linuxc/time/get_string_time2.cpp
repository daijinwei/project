#include <time.h>
#include <stdio.h>

int main()
{
	struct tm *ptr;
	struct tm *local;
	time_t 	now;
	now = time(NULL);
	local = localtime(&now);
	char *ptime = asctime(local);
	printf("ptime is %s\n", ptime);
	return 0;
}

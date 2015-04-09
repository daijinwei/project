#include <stdio.h>
#include <string.h>

int main()
{
	int num = 100;
	char buf[512];
	for (int i = 0; i < num; i++){

		char *ret = strerror_r(i, buf, sizeof(buf));	// GNU-specific
		if ( ret == NULL) {
			printf("output the error failed\n");
		}
		printf("%s\n", ret);
	}
}

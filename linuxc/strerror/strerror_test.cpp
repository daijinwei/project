#include <stdio.h>
#include <string.h>

int main()
{
	int num = 100;
	for (int i = 0; i < num; i++){
		printf("%s\n",strerror(i));	
	}
}

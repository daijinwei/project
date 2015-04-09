/*
 * =====================================================================================
 *
 *       Filename:  getenv.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/29/2014 10:59:09 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int backlog = 0;
	char *ptr;
	if((ptr = getenv("LISTENQ")) != NULL) {
		backlog = atoi(ptr)	;
		printf("backlog success\n");
	}

	printf("backlog = %d\n", backlog);
}

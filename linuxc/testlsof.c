/*
 * =====================================================================================
 *
 *       Filename:  testlsof.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/04/2015 11:07:29 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */


#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	open("daijinwei", O_CREAT|O_RDONLY);
	sleep(1200);
	return 0;
}

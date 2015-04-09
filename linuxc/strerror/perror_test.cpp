/*
 * =====================================================================================
 *
 *       Filename:  perror_test.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/26/2014 08:44:16 PM
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
	int fd;
	fd = open("daijiwnei", 'r');
	if (fd < 0) {
		perror("open file failed\n");
	}
	perror("openf file success\n");
}

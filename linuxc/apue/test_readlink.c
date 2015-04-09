/**
 * APUE study
 * Author:		David <daijinwei41@gmail.com>
 * Created:		2015/02/04
 * Modified:	2015/02/04
 * Version:		1.0
 * Description:	get the file pathname from the fd
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUFSIZE 4096

char *get_pathname_from_fd(int fd, int bufsize)
{
    char buf[BUFSIZE];
    char pathname[BUFSIZE];
	char *ret;
    memset(pathname, 0, BUFSIZE);
    memset(buf, 0, BUFSIZE);

    pid_t pid;
    pid = getpid();

    snprintf(pathname, BUFSIZE, "/proc/%i/fd/%i", pid, fd);
    if ( -1 == readlink(pathname, buf, bufsize)) {
        printf("readlink return pathname failed\n");	
    }
	ret = buf;
    return ret;
}

int main()
{
    int fd;
    //char pathname[BUFSIZE];
    char *pathname;
	memset(pathname, 0, BUFSIZE);
   	fd = open("test", O_CREAT|O_RDONLY);
	pathname = get_pathname_from_fd(fd, BUFSIZE);

	printf("%s\n", pathname);
	
    return 0;
}

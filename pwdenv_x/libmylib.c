#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>


char buf[1024];

char * myfunc (char* argument1, char * buf, size_t limit)
{
	char gdeproc[256] = "/proc/";
//	char* argument1 = argv[1];
	char* skleika = strcat(strcat(gdeproc,argument1),"/cwd");
	int func = readlink (skleika, buf, limit);
	buf[func] = '\0';
	return buf;
}

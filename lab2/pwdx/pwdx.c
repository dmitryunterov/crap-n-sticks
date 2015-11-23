#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main(int argc, char* argv[])
{
//	char gdeproc[256] = "/proc/";
//	char* argument1 = argv[1];
//	char* skleika = strcat(strcat(gdeproc,argument1),"/cwd");
	char buf[1024];
//	int func = readlink (skleika, buf, sizeof (buf));
//	buf[func] = '\0';
	myfunc (argv[1], buf, sizeof (buf));
	printf("%s\n", buf);
	return 0;
}

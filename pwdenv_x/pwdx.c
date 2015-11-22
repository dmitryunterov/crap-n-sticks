#include <stdio.h>
#include <unistd.h>
//из мана по readlink
#include <errno.h>

int main(int argc, char const *argv[])
{
	char buf[1024];
	int buffsize = sizeof(buf);
//про sizeof подсмотрел как сделано у коллег
	readlink("/proc/argv[1]/cwd", buf, sizeof(buffsize));
//явно указан путь, мне б хоть попробовать
	printf("%s", buf);
	return 0;
}

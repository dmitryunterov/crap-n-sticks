#include <stdio.h>
#include <unistd.h>
//из мана по readlink
#include <errno.h>

int main(int argc, char  *argv[])
{
	char buf[1024];
	char* gde = argv[1];
//Вероятно так надо указать указатель (мда).
//про sizeof подсмотрел как сделано у коллег
	int func = readlink(gde, buf, sizeof (buf));
	buf[func] = '\0';
	printf("%s\n", buf);
	return 0;
}

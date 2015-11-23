#include <stdio.h>
#include <unistd.h>
//из мана по readlink
#include <errno.h>

int main(int argc, char* argv[])
{
	char buf[256];
	char* what=argv[1];
	char* proc="proc";
	char* siml="cwd";
	char* gde =(/%s/%s/%s, proc, what, siml);
//Вероятно так надо указать указатель (мда).
//про sizeof подсмотрел как сделано у коллег
	int func = readlink (gde, buf, sizeof (buf));
	buf[func] = '\0';
	printf("%s\n", buf);
	return 0;
}

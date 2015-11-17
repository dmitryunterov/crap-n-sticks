#include <pwd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
//"шапку" взял из примера в мане по getpwnam. На всякий случай полностью.)
int main(int argc, char *argv[])
{
	puts(getpwuid (geteuid())->pw_name);
	return EXIT_SUCCESS;
 }

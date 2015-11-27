#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

//Для pwdx
char buf[1024];

char * mypwd (char* arg1pwd, char * buf, size_t limit)
{
	char gdeproc[256] = "/proc/";
	char* argumentpwd = arg1pwd;
	char* skleika = strcat(strcat(gdeproc,argumentpwd),"/cwd");
	int func = readlink (skleika, buf, limit);
	buf[func] = '\0';
	return buf;
}

//Для envx
char * myenv (char* arg1env)
{
	char gdeproc2[256] = "/proc/";
	char* argumentenv = arg1env;
	char* skleika2 = strcat(strcat(gdeproc2,argumentenv),"/environ");
        FILE *ptr_file;
        ptr_file = fopen(skleika2, "r");
        char c;
        do
{
        c = fgetc(ptr_file);
        if ( c == '\0' )
        {
        c = '\n';
        }
        printf("%c", c);
}
        while ( c != EOF );
	fclose(ptr_file);
}


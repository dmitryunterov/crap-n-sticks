#include <stdio.h>
#include <string.h>
#include "libmylib.h"

int main(int argc, char* argv[])
{
/*
	char gdeproc[256] = "/proc/";
	char* argument1 = argv[1];
	char* skleika = strcat(strcat(gdeproc,argument1),"/environ");
Свои потуги закомментил, воспользовался рабочим рецептом
//Самая первая попытка сделать выводилку на экран текста из точно указанного файла

	FILE *ptr_file;
	char buf[8];

   	ptr_file =fopen(skleika,"r");
    	if (!ptr_file)
      	return 1;

    	while (fgets(buf,8, ptr_file)!=NULL)
        	printf("%s",buf);

	fclose(ptr_file);
    	return 0;

//Всё что ниже - ушло в libmylib

	FILE *ptr_file;
	ptr_file = fopen(skleika, "r");
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
*/
	char * arg1env = argv[1];
	myenv(arg1env);
}

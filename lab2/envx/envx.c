//Самая первая попытка сделать выводилку на экран текста из точно указанного файла
#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[])
{
	char gdeproc[256] = "/proc/";
	char* argument1 = argv[1];
	char* skleika = strcat(strcat(gdeproc,argument1),"/environ");
/*
	Свои потуги закомментил, воспользовался рабочим рецептом

	FILE *ptr_file;
	char buf[8];

   	ptr_file =fopen(skleika,"r");
    	if (!ptr_file)
      	return 1;

    	while (fgets(buf,8, ptr_file)!=NULL)

//	while (fgets(ptr_file)!=NULL)
        	printf("%s",buf);

	fclose(ptr_file);
    	return 0;
*/
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
}

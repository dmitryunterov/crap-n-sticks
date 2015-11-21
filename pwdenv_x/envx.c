//Самая первая попытка сделать выводилку на экран текста из точно указанного файла
#include<stdio.h>
int main()
{
	FILE *ptr_file;
	char buf[1000];

   	ptr_file =fopen("/proc/2412/environ","r");
    	if (!ptr_file)
      	return 1;

    	while (fgets(buf,1000, ptr_file)!=NULL)
        	printf("%s",buf);

	fclose(ptr_file);
    	return 0;
}

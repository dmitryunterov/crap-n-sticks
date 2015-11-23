#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
//Спасибо Казарину, подсказал про strcat

int main(int argc, char* argv[])
{
	char gdeproc[256] = "/proc/";
//Переменные, из значений которых склеится путь к cwd
	char* argument1 = argv[1];
//Аргументом 1 передаётся PID
	char* skleika = strcat(strcat(gdeproc,argument1),"/cwd");
//Вот эту магию понял так: функция strcat склеивает значение двух переменных 
//gdeproc и argument1 а вышестоящий strcat склеивает это значение с /cwd и отдаёт
//суммарное значение как значение пересенной skleika
	char buf[1024];
//	char* gde = skleika;
//Нужна ли эта переменная или readlink сожрёт сразу значение склейки?.
	int func = readlink (skleika, buf, sizeof (buf));
	buf[func] = '\0';
	printf("%s\n", buf);
	return 0;
}

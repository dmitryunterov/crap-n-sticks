//Рассудив, что логин есть в выводе комманды env (LOGNAME=dima)
//Я отправился в гугль и выяснил про getenv. Почитал, полистал примеры и получилось вот что
//man 3 getenv рассказал, что надо подключить
#include <stdlib.h>
#include <stdio.h>

int main ()
{
	printf(getenv("LOGNAME"));
	return(777);
}
//777 просто что бы глянуть что будет


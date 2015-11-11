#include <pwd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
//"шапку" взял из примера в мане по getpwnam. На всякий случай полностью.)
int main(int argc, char *argv[])
{
struct passwd *p;
uid_t uid;
printf(p->pw_name);
return(0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include "main.h"
int cd(char **args);
int quit(char **args);
int help(char **args);

char *built[] = {"cd", "quit", "help"};
int (*builtfunc)(char **) = {&cd,&quit,&help};
int numbuilt()
{
    return(sizeof(built)/ sizeof(char *));
}
int cd(char **args)
{
    if (arg[1] == NULL)
    {
        printf("errorN");
    }
    else if (chdir(args[1]) != 0)
    {
        printf("error1");
    }
    return (1);
}
int help(char **args)
{
    int i;
    printf("these are builtin functions\n");
    for(i = 0; i < numbuilt; i++)
    {
        printf("%s\n",built[i]);
    }
    printf("use man command for other infos");
    return(1);
}
int quit(char **args)
    return(0);
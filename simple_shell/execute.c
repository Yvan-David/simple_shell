#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include "main.h"
int execute(char **args)
{
    int i;
    if (args[0] == NULL)
        return(1);
    for(i = 0; i < numbuilt();i++)
    {
        if (strcmp(args[0], built[i]) == 0)
            return(*builtfunc[i])(args);
    }
    return(flaunch(args));
}
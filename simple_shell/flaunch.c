#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include "main.h"
int flaunch(char **args)
git_d = pid,id;
int status;
pid = fork();
if(pid == 0)
{
   if (execp(args[0],args) == -1)
   {
        printf("error run");
   }
}
else if (pid < 0)
{
     printf("error run");
}
else
{do
{
    id = waitpid(pid, &status, WUNTRACED);
}
while (!WIFEXITED(status) && !WIFSIGNALED(status));
return 1;
}
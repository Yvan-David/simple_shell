#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#define BUFFERSIZE 1024
char* main(void)
{
    char *line = NULL;
    int count = 0;
    int bufsize = BUFFERSIZE;
    line = (char*)malloc(sizeof(char) * bufsize);
    if (!line)
            {
                printf("error");
                exit(EXIT_FAILURE);
            }
    do
    {
        
        line[count] = getchar();
        if (line[count] == EOF || line[count] == '\n')
            {
                line[count] = '\0';
                return (line);
            }
        count++;
        if(count >= bufsize)
        {
            bufsize += BUFFERSIZE;
            line = realloc(line, bufsize);
            if (!line)
            {
                printf("error");
                exit(EXIT_FAILURE);
            }

        }
    }
    while(1);
}
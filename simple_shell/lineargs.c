#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include "main.h"
#define LIMITS "\n\t\r\a"
#include "readline.c"
#define BUFFERSIZE 64
char** lineargs(char *line)
{
  // char* readline();
    //char *line = readline();
    char *token;
    int bufsize = BUFFERSIZE;
   char **tokens = malloc(sizeof(char*) * bufsize);
   //(char*) *token = NULL;
   int count = 0;
   if (!tokens)
            {
                printf("error1");
                exit(EXIT_FAILURE);
            }
    token = (char*)strtok(line, LIMITS);
   while(token != NULL)
   {
        tokens[count] = token;
        if(count >= bufsize)
        {
            bufsize += BUFFERSIZE;
            tokens = realloc(tokens,sizeof(char*) * bufsize);
            if (!tokens)
            {
                printf("error1");
                exit(EXIT_FAILURE);
            }
        }
        count++;
        token = strtok(NULL, LIMITS);

   }
    tokens[count] = NULL;
    return(tokens);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#define BUFFERSIZE 64
/**
 *main1 - create a command
 *Return: value
 */
char *main1(void)
{
char *buffer = NULL;
size_t bufsize;
printf("$");
if (getline(&buffer, &bufsize, stdin) == -1)
{
if (feof(stdin))
{
exit(EXIT_SUCCESS);
}
else
{
printf("erro");
exit(EXIT_FAILURE);
}
}
return (buffer);
}
/**
 *main2 - create a command
 * *@buffer: line poointer
 *Return: value
 */
char **main2(char *buffer)
{
int count = 0, bufsiz = BUFFERSIZE;
char *token, **tokens;
tokens = malloc(sizeof(char *) * bufsiz);
if (!tokens)
{
printf("error1");
exit(EXIT_FAILURE);
}
token = strtok(buffer, " ");
while (token != NULL)
{
tokens[count] = token;
if (count >= bufsiz)
{
bufsiz += BUFFERSIZE;
tokens = realloc(tokens, sizeof(char *) * bufsiz);
if (!tokens)
{
printf("error1");
exit(EXIT_FAILURE);
}
}
count++;
token = strtok(NULL, " ");
}
tokens[count] = NULL;
return (tokens);
}
/**
 *main - create a command
 *@tokens: parameter
 *Return: value
 */
int main(char *tokens)
{
while (1)
{
main2(main1());
char *argv[] = {"/bin/ls", "-l", "/usr", NULL};
if (fork() == 0)
{
if (execve(argv[0], argv, NULL) == -1)
printf("error");
}
else
wait(NULL);
}
return (0);
}

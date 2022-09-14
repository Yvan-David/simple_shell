#ifndef MAIN_H
#define MAIN_H
void loop(void);
char* readline(void);
char** lineargs(char *line);
int flaunch(char **args);
int (*builtfunc)(char **);
int cd(char **args);
int quit(char **args);
int help(char **args);
int execute(char **args);

#endif
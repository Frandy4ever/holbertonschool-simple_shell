#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
#include <sys/wait.h>
#include <limits.h>
#include <signal.h>

void execmd(char **argv);
char *get_location(char *command);
void _execute(char **args);
char **_split_toks(char *line);
char* _getline();

#endif /* _SHELL_H_ */

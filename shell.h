#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


void execmd(char **argv);
char *get_location(char *command);




#endif /* _SHELL_H_ */

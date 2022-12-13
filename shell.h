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

/*extern char **environ;*/

/*typedef struct list_s
{
	char *str;
	struct list_s *next;
}list_t;

void free_list(list_t *head);
size_t print_list(list_t *h);
list_t *make_p_list(char *path, list_t *h);*/
void _execute(char **args);
char **_split_toks(char *line);
char* _getline();
/*char *path_cat(char *cmd, char *path);*/
/*char *get_path(char *name);*/
/*list_t *add_node_end(list_t *head, const char *str);*/



#endif

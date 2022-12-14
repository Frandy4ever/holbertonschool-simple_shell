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

/**
 * struct list_s - singly linked list
 * @str: character string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */

typedef struct list_s
{
	char *str;
	struct list_s *next;
} list_t;

void free_list(list_t *head);
size_t print_list(list_t *h);
list_t *make_p_list(char *path, list_t *h);
void _execute(char **args);
char **_split_toks(char *line);
char *_getline(void);
char *get_path(char *name);
list_t *add_node_end(list_t *head, const char *str);
char *_getline(void);
/*list_t *add_node_end(list_t *head, const char *str);*/



#endif

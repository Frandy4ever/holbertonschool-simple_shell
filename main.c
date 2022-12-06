#include "shell.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * main - opens shell and runs basic commands
 *Return: 0 on success
 */

int main(int ac, char **argv)
{
	int len, status
	size_t l_s;
	char delim[] = " \n";
	char **split_toks = malloc(5 * sizeof(char *));
	size_t length = 0;
	
		printf("$ ");
		
		free(split_toks);
		free(line);
		line = NULL;
	}
}

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

int main(void)
{
	int len, status;
	char *line, *token;
	size_t l_s;
	char delim[] = " \n";
	char **split_toks = malloc(5 * sizeof(char *));
	size_t length = 0;
	pid_t c_pid;

	while (1)
	{
		printf("$ ");
		l_s = getline(&line, &length, stdin);
		token = strtok(line, delim);
		for (len = 0; token != NULL && l_s != 0; len++)
		{
			split_toks[len] = token;
			token = strtok(NULL, delim);
		}
		split_toks[len] = NULL;
		if (split_toks[0] != NULL)
		{
			c_pid = fork();

			if (c_pid == 0)
			{
				execve(split_toks[0], split_toks, NULL);
				perror("Error");
				exit(1);
			}
			wait(&status);
		}
		free(split_toks);
		free(line);
		line = NULL;
	}
}

#include "shell.h"

/**
 *
 *
 */

void _execute(char **args)
{
	int stat;
	pid_t child_pid = fork();

	if (child_pid == 0)
	{
		execve(args[0], args, NULL);
		perror("ERROR");
		exit(1);
	}
	wait(&stat);
}

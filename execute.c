#include "shell.h"

/**
 *
 *
 */

void _execute(char **args)
{
	pid_t child_pid = fork();

	if (child_pid == 0)
	{
		execve(args[0], args, NULL);
		perror(execute unsuccessful);
		exit(1);
	}
}

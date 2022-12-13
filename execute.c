#include "shell.h"

/**
 * _execute - creates child process and executes
 * @args : argument vector from command line
 */

void _execute(char **args)
{
	pid_t child_pid = fork();

	if (child_pid != 0)
		wait(NULL);
	if (child_pid == 0)
	{
		execve(args[0], args, NULL);
		perror("ERROR");
		exit(1);
	}
}

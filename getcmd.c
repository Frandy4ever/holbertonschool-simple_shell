#include "shell.h"

/**
 * _getline - grabs command from line in stdin
 *
 * Return: command
 */

char *_getline(void)
{
	char *line = NULL;
	size_t buflen = 0;

	if (isatty(STDIN_FILENO) == 1)
		printf("($) ");
	if (getline(&line, &buflen, stdin) < 0)
	{
		if (isatty(STDIN_FILENO) == 1)
			printf("\n");
		free(line);
		exit(0);
	}
	return (line);
}

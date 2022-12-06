#include "shell.h"

/**
 * _getline - grabs command from line in stdin
 *
 * Returns: command
 */

char* _getline()
{
    char *line = NULL;
    size_t buflen = 0;
    ssize_t i;

    i = getline(&line, &buflen, stdin);
    if (i == EOF)
	    exit(0);
    return line;
}

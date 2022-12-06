#include shell.h

/**
 * _getline - grabs command from line in stdin
 *
 * Returns: command
 */

char* _getline()
{
    char *line = NULL;
    size_t buflen = 0;
    getline(&line, &buflen, stdin);
    return line;
}

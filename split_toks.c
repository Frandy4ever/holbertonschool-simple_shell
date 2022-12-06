#include "shell.h"

/**
 *
 *
 */

char **split_toks(char *line)
{
    int length = 0;
    int capacity = 16;
    char **tokens = malloc(capacity * sizeof(char*));

    char *delim = " \t\n";
    char *token = strtok(line, delim);

    while (token != NULL)
    {
        tokens[length] = token;
        length++;

        token = strtok(NULL, delim);
    }

    tokens[length] = NULL;
    return tokens;
}

#include "shell.h"

/**
 * _split_toks - splits command line args into tokens
 * @line : line of arguments
 * Return: array of arguments
 */

char **_split_toks(char *line)
{
	int length = 0;
	int capacity = 16;
	char **tokens = malloc(capacity * sizeof(char *));
	char *delim = " \n";
	char *token = strtok(line, delim);

	while (token != NULL)
	{
		tokens[length] = token;
		length++;
		token = strtok(NULL, delim);
	}
	tokens[length] = NULL;
	return (tokens);


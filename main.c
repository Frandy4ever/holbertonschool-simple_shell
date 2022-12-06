#include "shell.h"

/**
 * main - opens shell and runs basic commands
 *Return: 0 on success
 */

int main(int ac, char **av)
{
	char *l_s;
	char **split_toks;

	if (ac > 1)
		_execute(av);
	while (1)
	{
		printf("$ ");
		l_s = _getline();
		if (l_s == NULL)
		{
			perror("ERROR");
			exit(0);
		}
		split_toks = _split_toks(l_s);
		if (split_toks[0] != NULL)
			_execute(split_toks);
		free(split_toks);
		free(l_s);
		l_s = NULL;
	}
}

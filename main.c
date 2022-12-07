#include "shell.h"

/**
 * main - opens shell and runs basic commands
 *Return: 0 on success
 */

int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
	char *l_s;
	char **split_toks;

	while (1)
	{
		l_s = _getline();
		split_toks = _split_toks(l_s);
		if (split_toks[0] != NULL)
			_execute(split_toks);
		free(split_toks);
		free(l_s);
		l_s = NULL;
	}
}

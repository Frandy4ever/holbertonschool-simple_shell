#include "shell.h"


/**
 * main - opens shell and runs basic commands
 *Return: 0 on success
 */

int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
	/*list_t *h = NULL;*/
	char *l_s;/*, *PATH, *name = "PATH="*/
	char **split_toks;

	 /* PATH = get_path(name);
	 printf("got path string: %s \n", PATH);
	 h = make_p_list(PATH, h);*/
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

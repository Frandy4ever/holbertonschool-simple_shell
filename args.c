#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int m;
	(void) ac;

	for (m = 0; av[m] != NULL; m++)
		printf("%s ", av[m]);
	printf("\n");
	return (0);
}

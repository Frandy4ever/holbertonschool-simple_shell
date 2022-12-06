#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t c_pid;
	int i, stat;
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};

	for (i = 0; i < 5; i++)
	{
		c_pid = fork();
		if (c_pid > 0)
			wait(&stat);
		if (c_pid == 0)
			execve(argv[0], argv, NULL);
	}
	return (0);
}

#include "shell.h"


/**
 *
 *
 *
 *
 */
int main(int argc, char **argv)
{
	char *prompt = "($) ";
	char *buf = NULL;
	size_t bufsize = 5;

	(void)argc;
	(void)argv;

	while (1)
	{
		write(STDOUT_FILENO, prompt, 5);
		getline(&buf, &bufsize, stdin);

		printf("%s", buf);
	}
	free(buf);
	printf("buf is freed");
	return (0);
}

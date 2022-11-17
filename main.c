#include "main.h"

int main(int argc, char **argv)
{
	char *prompt = "(simple_shell) $ ";
	char *lineptr;
	size_t n = 0;

	printf("%s", prompt);
	getline(&lineptr, &n, stdin);

	free(lineptr);
	return 0;
}

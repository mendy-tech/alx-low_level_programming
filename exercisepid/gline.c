#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints "$ "
 * @argv - an array of pointers to arrays of character objects.
 * @argc - indicates how many arguments were entered.
 * Return:Always 0.
 */

int main(__attribute__((unused))int argc, __attribute__((unused))char *argv[])
{
	char *line = NULL;
	size_t len = 0;
	ssize_t rgen;

	printf("$ ");

	rgen = getline(&line, &len, stdin);
	printf("%s\n", line);
	printf("Number of characters: %ld\n", rgen);
	free(line);
	exit(EXIT_SUCCESS);
}

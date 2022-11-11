#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints argv
 * @argv is the argument vector
 * @argc is the argument count
 * Return: Always 0.
 */

int main(__attribute__((unused))int argc, char **argv)
{
	int idx = 0;

	while (argv[idx])
	{
		printf("argv[%d]: %s\n", idx, argv[idx]);
		idx++;
	}
	return (0);
}

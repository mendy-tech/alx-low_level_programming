#include <stdio.h>
#include <stdlib.h>

/**
* main - prints all the arguments
*@argc is the argument count
*@argv is the argument vector
* Return: Always 0.
*/

int main(int argc, char **argv)
{
	int z;

	for (z = 0; z < argc; z++)
	{
		printf("%s\n", argv[z]);
	}
	return (0);
}

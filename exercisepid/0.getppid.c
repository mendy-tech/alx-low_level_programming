#include <stdio.h>
#include <unistd.h>

/**
 * main - pid
 * Return: Always 0.
 */

int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("Mel %u\n", my_pid);
	my_pid = getppid();
	printf("kel %u\n", my_pid);
	return (0);
}

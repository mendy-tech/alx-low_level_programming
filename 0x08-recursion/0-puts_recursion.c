#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string, then a new line.
 * @s: string
 * Return: no return.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
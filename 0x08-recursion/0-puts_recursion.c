#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string.
 * @s: string to printed.
 * Return: printed string with new line.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
	return;
	}
	printf("%c", *s);
	_puts_recursion(s + 1);
}

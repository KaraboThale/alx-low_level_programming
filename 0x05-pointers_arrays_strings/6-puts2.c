#include "main.h"

/**
*puts2 - print every other character of a string.
*@str: string to be printed.
*/

void puts2(char *str)
{
	int i;
	int j = 0;

	while (j++)
	for (i = 0; i < j; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}

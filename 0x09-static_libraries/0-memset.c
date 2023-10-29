#include "main.h"

/**
 * _memset - fill a block of memory with specified value.
 * @s: starting address.
 * @b: input value.
 * @n: number of bytes to changed.
 * Return: array changes to value with n bytes.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}

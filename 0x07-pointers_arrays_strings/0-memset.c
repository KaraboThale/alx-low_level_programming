#include "main.h"

/**
 * _memset - fills memory with set bytes.
 * @s: pointer destination.
 * @b: constant bytes.
 * @n: bytes.
 * Return: Always 0 (Success).
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

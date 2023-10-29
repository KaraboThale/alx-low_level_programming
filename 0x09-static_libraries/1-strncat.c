#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings using
 * n bytes from src.
 * @dest: destination buffer.
 * @src: source buffer.
 * @n: input value.
 * Return: dest.
 */

extern char *strncat(char *dest,char *src, long unsigned int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src [b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

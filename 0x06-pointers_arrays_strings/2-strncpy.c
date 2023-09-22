#include "main.h"

/**
 * _strncpy - copies a string to a buffer.
 * @dest: the buffer that stores the string copy.
 * @src: source string.
 * @n: maximum number of bytes to copied from src.
 * Return: poimter to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a] && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

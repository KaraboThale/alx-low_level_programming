#!/bin/bash
#include "main.h"

/**
 * _memcpy - copy a memory area.
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes.
 * Return: memory that is copied.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (;j < i; j++)
	{dest[j] =src[j];
		n--;
	}
	return (dest);
}

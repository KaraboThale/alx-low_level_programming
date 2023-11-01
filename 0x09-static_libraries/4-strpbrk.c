#!/bin/bash
#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Search a string for any set of bytes.
 * @s: pointer to the byte.
 * @accept: input bytes.
 * Return: null.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}

	return (NULL);
}

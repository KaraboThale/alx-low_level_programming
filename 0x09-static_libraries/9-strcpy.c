#!/bin/bash
#include "main.h"

/**
*_strcpy - Copy a string
*@dest: Value of destination
*@src: Value of source
*Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

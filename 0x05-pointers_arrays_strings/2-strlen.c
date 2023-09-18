#include “main.h”

/**
*_strlen - returns length of a string
*@s: input
*(*s != ‘\0’ ): char iteration
* len: string array counter
* Return: length
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != ‘\0’ )
	{
		s++;
		len++;
	}
	return (len);
}

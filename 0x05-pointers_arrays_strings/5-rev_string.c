#include "main.h"

/**
*rev_string - prints a reverse string.
*@s: string to be reversed
*/

void rev_string(char *s)
{
	int i = 0;
	int end;
	int start;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	for (start =0, end = i -1; s++;)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}
}

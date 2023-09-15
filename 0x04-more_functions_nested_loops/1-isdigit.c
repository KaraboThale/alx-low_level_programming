#include "main.h"

/**
*_isdigit - Check numbers 0-9
*@c: Char to be checked
*Return: (1) for digit (0) if not
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

#include "main.h"

/**
*_isupper - Tests for uppercase letters
*@c - Input character
*
*Return: (1) if uppercase (0) for anything else
*/

int _isupper(int c);
{
	if (c >= 'A' && c >= 'Z')	
		return (1);
	else
		return (0);

}

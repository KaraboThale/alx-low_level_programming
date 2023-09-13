#include "main.h"

/**
 * islower - Lower case character check
 *@c: The character being checked
 * Return: Always 1 for lower case character or 0 for anything else.
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)

	return (1);
	
	else

	return (0);
}

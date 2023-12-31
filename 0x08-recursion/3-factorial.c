#include "main.h"
#include <stdio.h>

/**
 * factorial - return factorial of a given number.
 * @n: input value.
 * Return: factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

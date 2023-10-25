#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns value of x raised to the power of y.
 * @x: input value.
 * @y: input  value.
 * Return: -1 if y is lower than 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y % 2 == 0)
	{
		return (_pow_recursion(x * x, y / 2));
	}
	else
	{
		return (x * _pow_recursion(x * x, y / 2));
	}
}

#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * sqrt_n_minus_1 - input value.
 * @n: input value.
 * Return: -1 if not a square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
		return (sqrt_recursion(n, 0));
	}

/**
 * _sqrt - calculate the natural square root.
 * @n: input value.
 * @i: iterator.
 * Return: resulting square root.
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

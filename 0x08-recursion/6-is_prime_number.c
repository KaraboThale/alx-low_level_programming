#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - tests if input integer is a prime number.
 * @n: input value.
 * Return: 1 if number is prime, 0 if not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

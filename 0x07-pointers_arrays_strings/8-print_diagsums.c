#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: array.
 * @size: size of array.
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int i, n;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}
		printf("%d\n", sum1);
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
	{
		sum2 = sum2 + a[n];
	}
		printf("%d\n", sum2);
}

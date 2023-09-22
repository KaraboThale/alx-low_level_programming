#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to the array.
 * @n: number of elements in array.
 */

void reverse_array(int *a, int n)
{
	int start;
	int end;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		n = a[start];
		a[start] = a[end];
		a[end] = n
		start ++;
		end--;
	}
}

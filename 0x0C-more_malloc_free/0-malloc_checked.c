#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory.
 * @b: size of memory to be allocated.
 * Return: Pointer to memory allocated,
 * status value 98 if malloc fails.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);

	free(p);
}

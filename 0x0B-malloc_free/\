#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _create_array - creates and initializes an array of chars
 * with a specific char.
 * Return: NULL if size is 0, pointer to array or 
 * NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	
	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i > 0; i++)
	{
		array[i] = c;
	}

	free(array);

	return (array);
}

/**
 * _main - test function
 * @array: input.
 * Return: NULL
 */

int _main(void)
{
	char *array = create_array (5, 'a');
	int i;

	if (array == NULL)
	{
		printf("Failed to create array.\n");
		return (1);
	}
	for (i = 0; i < 5; i++)
	{
		printf("%c", array[i]);
	}

	free(array);

	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - function returning an integer.
 * @argv: refers to an array of string.
 * @argc: contains number of arguments
 * passed through program.
 * Return: Always 0 (Success).
 */

int main(int argc, char **argv)
{
	if (argc < 0)
	{
		printf("my name is: %s\n", argv[0]);
	}
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - print number of arguments passed through the program.
 * @argc: number of arguments.
 * @argv: refers to an array of string.
 * Return: Always (0) Success.
 */

int main(int argc, char *argv[])

{

(void) argv; /*Ignore argv*/

	printf("%d\n", argc - 1);



	return (0);

}

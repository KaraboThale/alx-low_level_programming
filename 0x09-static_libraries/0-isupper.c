#!/bin/bash
#include "main.h"

/**
 * _isupper - checks for upper case letters.
 * @c: char to check.
 * Return: 1 if upper case, 0 if not.
 */

int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}

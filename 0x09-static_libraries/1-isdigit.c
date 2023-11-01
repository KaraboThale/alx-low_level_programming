#!/bin/bash
#include "main.h"

/**
 * _isdigit - tests for a digit.
 * @c: input value.
 * Return: 1 if c is a digit, 0 if not.
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit (0 to 9)
 * @c: digit to check
 *
 * Return: 1 (c is digit) or 0 (otherwise)
 */

int _isdigit(int c)
{
	int a;

	if (('0' <= c) && (c <= '9'))
		a = 1;
	else
		a = 0;

	return (a);
}

#include <stdio.h>
#include "main.h"

/**
 * _islower - checks lowercase character
 * @c: character to check
 *
 * Return: 1 (c is lowercase) or 0 otherwise
 */
int _islower(int c)
{
	int a;

	if (('a' <= c) && (c <= 'z'))
		a = 1;
	else
		a = 0;
	return (a);
}

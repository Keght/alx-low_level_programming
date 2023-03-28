#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 *
 * Return: 1 for alphabet and 0 otherwise
 */
int _isalpha(int c)
{
	int a;

	if ((('a' <= c) && (c <= 'z')) || (('A' <= c) && (c <= 'Z')))
		a = 1;
	else
		a = 0;
	return (a);
}

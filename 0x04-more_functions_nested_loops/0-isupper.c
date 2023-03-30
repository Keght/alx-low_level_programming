#include <stdio.h>

/**
 * _isupper - checks value for upper case
 * @c: the integer to check
 *
 * Return: 0 (c is uppercase) or 0 (otherwise)
 */

int _isupper(int c)
{
	int a;

	if (('A' <= c) && (c <= 'Z'))
		a = 1;
	else
		a = 0;
	return (a);
}

#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to operate on
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	while (*s != '\0')
	{
		s++;
		a++;
	}

	return (a);
}

#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string to operate on
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s == '\0')
	{
		return (i);
	}
	else
	{
		s++;
		i++;
		return (i + _strlen_recursion(s));
	}
}

#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to examine
 * @accept: the string whose character will be searche in s
 * for equivalence
 *
 * Return: pointer to s form character of accept or NULL If no
 * byte found
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s != '\0')
	{
		a = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
				return (s);
			accept++;
			a++;
		}
		accept = accept - a;
		s++;
	}
	return (NULL);
}

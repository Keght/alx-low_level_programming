#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: array to fill
 * @b: constant to fill in to the memory
 * @n: number of space to use
 *
 * Return: return a pointer to 1st elt of array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}
	s =  s - n;

	return (s);
}

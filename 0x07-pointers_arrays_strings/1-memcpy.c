#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area of a function to
 * another function (taking into account first n characters)
 * @dest: array to copy to
 * @src: source of the memory data
 * @n: number of characters to copy
 *
 * Return: pointer to the dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	dest = dest - n;

	return (dest);
}

#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two string according to n.
 * @dest: string 1
 * @src: string 2
 * @n: number of character of string 2 to add.
 *
 * Return: point to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while ((src[j] != '\0') && (j < n))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies the string
 * @dest: string 1
 * @src: string 2
 * @n: integer denoting number to copy
 *
 * Return: pointer to the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while ((src[a] != '\0') && (a < n))
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

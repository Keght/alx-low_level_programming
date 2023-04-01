#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenate two strings
 * @dest: String 1
 * @src: string 2
 *
 * Return: the point to the string of concentination
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character and returns address of
 * first occurance in the string
 * @s: string to examine
 * @c: character to search for in the string
 *
 * Return: address of first occurence of c if found or NULL
 * if character not found
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
		if (*s == c)
		{
			return (s);
		}
	}

	return (NULL);
}

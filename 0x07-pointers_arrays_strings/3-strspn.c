#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: character string to examine
 * @accept: template whose character presence in s is counted
 *
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int i;

	a = 0;
	while ((*s != '\0') && (*s != ' '))
	{
		i = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				a++;
				break;
			}
			i++;
			accept++;
		}
		accept = accept - i;
		s++;
	}
	return (a);
}

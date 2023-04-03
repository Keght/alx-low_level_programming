#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * finds first occurrence of the substring needle in string haystack.
 * @haystack: main string to find the occurence
 * @needle: template to find in the haystack string
 *
 * Return: pointer to beginning of located substring, or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int n;
	int a;

	n = 0;
	while (*needle != '\0')
	{
		needle++;
		n++;
	}
	needle = needle - n;

	while (*haystack != '\0')
	{
		i = 0;
		a = 0;
		while (*haystack == *needle)
		{
			if (*haystack != '\0' && *needle != '\0')
			{
				a++;
			}
			else if (a == n && *needle == '\0')
			{
				return (haystack - i);
			}
			i++;
			haystack++;
			needle++;
		}
		haystack = haystack - i;
		needle = needle - i;
		haystack++;
	}
	return (NULL);
}

#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints a reversed string
 * @s: pointer to modify string
 */

void rev_string(char *s)
{
	int i;
	int j;
	char *rev;

	/**
	 * Counting elements of string
	 * copying elements to pointer rev to form literal string
	 */
	i = 0;
	j = 0;
	while (*s != '\0')
	{
		*rev = *s;
		i++;
		j++;
		s++;
		rev++;
	}
	*rev = '\0';
	/* Copying the value of rev to s in reverse form */
	s = (s - i);
	while (*s != '\0' && i >= 0)
	{
		rev--;
		*s = *rev;
		i--;
		s++;
	}
	*s = '\0';
	s = (s - j);
}

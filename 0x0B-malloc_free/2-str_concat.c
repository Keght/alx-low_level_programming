#include <stdlib.h>
#include <stdio.h>

char *alostore(char *s1, char *s2, int i, int j);

/**
 * str_concat - store 2 strings in heap and concatenates them
 * @s1: first string
 * @s2: Second string
 *
 * Return: Pointer to the newly allocated memory space or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	/* Count number of character in each string */
	for (i = 0; *s1 != '\0'; i++)
	{
		s1++;
	}
	for (j = 0; *s2 != '\0'; j++)
	{
		s2++;
	}

	return (alostore(s1, s2, i, j));

}

/**
 * alostore - Allocate and store value in the heap memory
 * @s1: first string to store
 * @s2: Second string to store after s1
 * @i: number of character in s1
 * @j: number of character in s2
 *
 * Return: Pointer to allocated memory or null for error
 */

char *alostore(char *s1, char *s2, int i, int j)
{
	char *ptr;

	/* allocate memory according to counted characters */
	ptr = (char *)malloc((j + i + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* Store in allocated memory appropriate characters */
	for (s1 = s1 - i; *s1 != '\0'; s1++)
	{
		*ptr = *s1;
		ptr++;
	}
	for (s2 = s2 - j; *s2 != '\0'; s2++)
	{
		*ptr = *s2;
		ptr++;
	}
	*ptr = '\0';
	ptr = ptr - (j + i);

	return (ptr);
}

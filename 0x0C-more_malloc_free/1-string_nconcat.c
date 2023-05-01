#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * first string followed by n characters of second string
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of characters to copy from second string.
 *
 * Return: Pointer to formed string or NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	char *string;

	/* Convert NULL pointer to empty string literals */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Count number of characters in each string */
	for (i = 0; *s1 != '\0'; i++)
		s1++;

	s1 = s1 - i;

	for (j = 0; (*s2 != '\0') && (j < n); j++, i++)
		s2++;

	s2 = s2 - j;

	/* Allocate memory to store the strings in concecutively */
	string = malloc((i + 1) * sizeof(char));
	if (string == NULL)
	{
		free(string);
		return (NULL);
	}

	/* Copy first string to the memory allocated */
	for (j = 0; *s1 != '\0'; j++, s1++)
		string[j] = *s1;

	/* Copy n characters of the second string to the remaining memory */
	for (; j < i; j++, s2++)
		string[j] = *s2;

	string[j] = '\0';

	return (string);
}

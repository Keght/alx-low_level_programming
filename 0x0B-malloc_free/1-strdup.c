#include <stdlib.h>

/**
 * _strdup - returns a pointer to passed string as argument
 * @str: The string to be written in the memory
 *
 * Return: NULL if NULL is passed as string or if memory alloacation
 * failed. Else, it returns pointer to the string passed.
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	ptr = (char *)malloc((i + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	str = str - i;

	while (*str != '\0')
	{
		*ptr = *str;
		ptr++;
		str++;
	}

	ptr = ptr - i;
	return (ptr);
}

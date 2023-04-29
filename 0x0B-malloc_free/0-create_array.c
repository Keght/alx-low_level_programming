#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initialize it with
 * a specific character.
 * @size: size of the array to be created.
 * @c: the character by which the array will be initialized to
 *
 * Return: Pointer to the created array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		*ptr = c;
		ptr++;
		i++;
	}

	ptr = ptr - size;
	return (ptr);
}

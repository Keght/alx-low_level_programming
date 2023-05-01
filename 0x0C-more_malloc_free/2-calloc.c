#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array using malloc and then
 * memory is set to zeros
 * @nmemb: number of elements to store in the array;
 * @size: size of each each element or group of bytes to allocate
 *
 * Return: Pointer to the allocated memory. Or NULL if nmemb or
 * size is 0 or if _calloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;
	void *mem;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*ptr = '\0';
		ptr++;
	}

	ptr = ptr - i;
	mem = ptr;
	return (mem);
}

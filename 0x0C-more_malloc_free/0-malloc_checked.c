#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes of memory to allocate
 *
 * Return: A pointer to the allocated memory and on fail
 * it exit the program with value 98.
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);
}

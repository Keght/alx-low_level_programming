#include <stdlib.h>

void *allocator(void *ptr, unsigned int old_size, unsigned int new_size);

/**
 * _realloc - Checks if data can be given new memory address:
 * If checks passed it calls allocator to allocate the require memory,
 * Copying the content in the previous memory.
 * @ptr: The pointer to memory previously allocated with malloc
 * @old_size: Size of the old previously allocated memory
 * @new_size: New size of the memory.
 *
 * Return: NULL if ptr == NULL or if new_size == 0.
 * Else, it returns pointer returned by allocator function.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newmem;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		newmem = malloc(new_size);
		if (newmem == NULL)
		{
			free(newmem);
			return (NULL);
		}

		return (newmem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (allocator(ptr, old_size, new_size));
}

/**
 * allocator - allocate the new memory form previous one.
 * Copies the content in the previous memory and free it.
 * If new_size > old_size, added part is not initialized.
 *
 * @ptr: The previously alocated memory
 * @old_size: size of the previous alocated memory
 * @new_size: size of new memory to be alocated.
 *
 * Return: Pointer to new memory or NULL if allocation failed
 */

void *allocator(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem;
	char *oldmem;
	void *newmem;

	/* Allocate memory for new size */
	newmem = malloc(new_size);
	if (newmem == NULL)
	{
		free(newmem);
		return (NULL);
	}

	/* Copy previous data to the new space */
	mem = newmem;
	oldmem = ptr;
	for (new_size = 0; new_size < old_size; new_size++)
	{
		mem[new_size] = oldmem[new_size];
	}

	/* Free old memory and return new memory */
	free(oldmem);
	return (mem);
}

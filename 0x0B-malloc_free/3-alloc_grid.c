#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - allocates memory to a 2D array of integers
 * @width: Number of columns
 * @height: Number of rows
 *
 * Return: Pointer to the array or NULL on fail or if width or height = 0
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (height == 0 || width == 0)
	{
		return (NULL);
	}

	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}

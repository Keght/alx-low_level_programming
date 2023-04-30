#include <stdlib.h>

/**
 * free_grid - frees a memory of a 2D array on the heap
 * @grid: pointer to a pointer pointing to the integers in the heap or
 * the 2D array whose memory should be freed.
 * @height: number of rows of that array.
 * Or number of 1D array in the pointer to.
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

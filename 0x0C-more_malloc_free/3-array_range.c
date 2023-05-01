#include <stdlib.h>

/**
 * array_range - Creates an array of integers that ranges
 * from min to max in order.
 * @min: Minimum number or first number in array
 * @max: maximum number of last number in array
 *
 * Return: Pointer to the newly created array or NULL if malloc
 * fails or if min > max
 */

int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);

	i = (max - min) + 1;
	array = malloc(i * sizeof(int));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}

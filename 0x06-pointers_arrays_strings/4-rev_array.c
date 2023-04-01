#include "main.h"

/**
 * reverse_array - reverses the content of integer array
 * @a: array name
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
	}
}

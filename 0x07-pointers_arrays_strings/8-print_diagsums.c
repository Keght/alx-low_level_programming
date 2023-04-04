#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of square
 * matrix of integers
 * @a: pointer to the first array of the matrix
 * @size: number of elements in each array
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum;
	
	for (i = 0, sum = 0; i < size; i++)
	{
		sum = sum + a[i][i];
	}
	printf("%d", sum);

	for (sum = 0; size > 0; size--)
	{
		sum = sum + a[size][size];
	}
	printf("%d\n", sum);
}

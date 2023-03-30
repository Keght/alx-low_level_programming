#include <stdio.h>

/**
 * positive_or_negative - check sign of integer
 * @i: integer to test
 *
 * Return: 0 (success)
 */
int positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	return (0);
}

#include "main.h"
#include <stdio.h>

void square(int *count, int *p, int n);

/**
 * _sqrt_recursion - calculate natural square root of number
 * @n: number to operate on
 *
 * Return: result of operation or
 * -1 if n doesn't have natural square root
 */

int _sqrt_recursion(int n)
{
	int i; /* counting variable */
	int a; /* odd number holder */

	i = 0;
	a = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		square(&i, &a, n);
		if (i * i == n)
		{
			return (i);
		}
		else
		{
			return (-1);
		}
	}
}

/**
 * square - calculate the aqual answer
 * @p: beginning of odd numbers
 * @count: counting variable
 * @n: the integer to operate on
 *
 * Return: same the it's caller.
 */

void square(int *count, int *p, int n)
{
	if (n <= 0)
	{
		(*p)++;
	}
	else
	{
		(*count)++;
		n = n - (*p);
		(*p) = (*p) + 2;
		square(count, p, n);
	}
}

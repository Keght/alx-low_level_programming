#include "main.h"
#include <stdio.h>

void square(int *count, int *p, int n);

int _sqrt_recursion(int n);

int check(int i, int n);

/**
 * is_prime_number - checks if number is a prime number
 * @n: number to check
 *
 * Return: 1 if number is prime number or
 * return 0 otherwise
 */

int is_prime_number(int n)
{
	int c;

	c = _sqrt_recursion(n);
	return (c);
}
/**
 * _sqrt_recursion - check if the number is perfect square
 * or the prime number.
 * @n: number to operate on
 *
 * Return: result of operation or
 * -1 if n doesn't have natural square root
 */

int _sqrt_recursion(int n)
{
	int i; /* counting variable */
	int a; /* odd number holder */
	int b; /*return value */

	i = 0;
	a = 1;

	if (n <= 1)
	{
		return (0);
	}
	else
	{
		square(&i, &a, n);
		if (i * i == n)
		{
			return (0);
		}
		else
		{
			/* check if number btn 2 and i divide n */
			b = check(i, n);
			return (b);
		}
	}
}

/**
 * square - calculate the number of times sequence
 * of odd numbers can be deducted from n.
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

/**
 * check - verify primality
 * @n: the integer
 * @i: number of times of odd num was substracted
 * to the number
 *
 * Return: 0 is not or 1 if prime number
 */

int check(int i, int n)
{
	if (i >= 2)
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			if (i != 2)
			{
				check((i - 1), n);
			}
		}
	}
	return (1);
}

#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: number whose factorial is to be determined
 *
 * Return: result of factorial
 * or Return -1 as an error message of n less than 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

#include "main.h"

/**
 * _pow_recursion - value of x raised to power of y
 * @x: base to be powered
 * @y: index or exponent
 *
 * Return: result of the function operation
 * and -1 for y less than 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
}

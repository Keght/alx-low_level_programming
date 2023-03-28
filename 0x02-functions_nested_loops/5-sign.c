#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: The number
 *
 * Return: 1 (n > 0), 0 (n == 0), -1 (n < 0)
 */
int print_sign(int n)
{
	int a;

	if (n > 0)
	{
		a = 1;
		_putchar('+');
	} else if (n == 0)
	{
		a = 0;
		_putchar('0');
	} else if (n < 0)
	{
		a = 1 - 2;
		_putchar('-');
	}
	return (a);
}

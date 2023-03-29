#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print all natural numbers
 * @n: starting point
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
}

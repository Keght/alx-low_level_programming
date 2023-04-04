#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
		_putchar('\n');

	c = 1;
	while (c <= size)
	{
		b = size - c;
		while (b > 0)
		{
			_putchar(' ');
			b--;
		}
		a = c;
		while (a > 0)
		{
			_putchar('#');
			a--;
		}
		c++;
		_putchar('\n');
	}
}


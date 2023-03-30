#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 */

void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');

	a = 0;
	while (a < size)
	{
		b = 0;
		while (b < size)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
}


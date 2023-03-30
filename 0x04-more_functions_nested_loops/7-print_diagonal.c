#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draw the diagonal line
 * @n: number of time to print \ character
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar('\n');
	a = 0;
	while (a < n)
	{
		b = 0;
		while (b < a)
		{
			_putchar(' ');
			b++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
}

#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of times to repeat _
 */

void print_line(int n)
{
	int a;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		a = 0;
		while (a < n)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
	}
}

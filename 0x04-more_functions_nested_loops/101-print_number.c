#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 */

void print_number(int n)
{
	int a;
	int b;

	b = 10;
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	/* find highest place value */
	while (a != n && b < n)
	{
		a = n % b;
		b = b * 10;
	}
	/* write number form highest place value to lower */
	while (b > 1 && n >= 0)
	{
		b = b / 10;
		a = n - (n % b);/*first digit times place value*/
		n = n - a;
		a  = (a / b + 48);
		_putchar(a);
	}
}

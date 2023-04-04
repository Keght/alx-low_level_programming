#include <stdio.h>
#include "main.h"

int power(int n, int j);

/**
 * print_number - prints an integer
 * @n: integer to print
 */

void print_number(int n)
{
	int a;
	int b;
	int j;

	b = 10;
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	/* find highest place value */
	j = 0;
	while (a != n && b <= n)
	{
		a = n % b;
		b = b * 10;
		j++;
	}
	/* write number form highest place value to lower */
	while (b > 1 && n >= 0)
	{
		if (n == power(10, j - 1))
		{
			_putchar('1');
			while (n > 1)
			{
				n = n / b;
				_putchar('0');
			}
			break;
		}
		else
		{
			b = b / 10;
			a = n - (n % b);/*first digit times place value*/
			n = n - a;
			a  = (a / b + 48);
			_putchar(a);
		}
	}
}

/**
 * power - calculate power of integer to integer
 * @n: the base (number to be exponented)
 * @j: the exponent or index
 *
 * Return: result of the exponent
 */

int power(int n, int j)
{
	int num;

	num = n;
	while (j > 1)
	{
		n = n * num;
		j--;
	}

	return (n);
}

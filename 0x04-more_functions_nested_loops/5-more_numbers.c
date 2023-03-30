#include <stdio.h>
#include "main.h"

void print_digit(char);

/**
 * more_numbers - print 10 times numbers form 0 to 14
 */

void more_numbers(void)
{
	char a;
	int b;
	char c;

	a = '0';
	while (a <= '9')
	{
		b = 0;
		c = '0';
		while (b < 10)
		{
			print_digit(c);
			b++;
			c++;
		}

		c = '0';
		b = 10;
		while (b <= 14)
		{
			print_digit('1');
			print_digit(c);
			b++;
			c++;
		}
		a++;
		_putchar('\n');
	}
}

/**
 * print_digit - print digit of number
 * @a: character to print
 */

void print_digit(char a)
{
	_putchar(a);
}

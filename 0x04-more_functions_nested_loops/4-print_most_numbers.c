#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print numbers 0 to 9 but
 * it skips 2 and 4
 */

void print_most_numbers(void)
{
	char a;

	a = '0';
	while (a <= '9')
	{
		if ((a == '2') || (a == '4'))
		{
			a++;
		} else
		{
			_putchar(a);
			a++;
		}
	}
	_putchar('\n');
}

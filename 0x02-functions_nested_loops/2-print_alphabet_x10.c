#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print x10 alphabets
 * @void: no parameter
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char a;
	char b;

	a = '0';
	while (a <= '9')
	{
		b = 'a';
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		a++;
	}
}

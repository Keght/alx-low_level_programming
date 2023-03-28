#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Print alphabets
 * @void: no parameter
 *
 * Return: void For success
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

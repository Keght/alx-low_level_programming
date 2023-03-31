#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to string to print
 */

void print_rev(char *s)
{
	int a;

	a = 0;
	while (*s != '\0')
	{
		s++;
		a++;
	}

	while (a > 0)
	{
		--s;
		_putchar(*s);
		a--;
	}
	_putchar('\n');
}

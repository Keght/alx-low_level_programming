#include "main.h"

/**
 * _print_rev_recursion - prints reverse of a string recursively
 * @s: string to print
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		s--;
	}
	else
	{
		++s;
		_print_rev_recursion(s);
		--s;
		_putchar(*s);
	}
}

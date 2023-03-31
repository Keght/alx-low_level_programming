#include "main.h"

/**
 * rev_string - prints a reversed string
 * @s: pointer to modify string
 */

void rev_string(char *s)
{
	char a;

	a = 0;
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		a++;
	}
	_putchar('\n');

	while (a > 0)
	{
		s--;
		_putchar(*s);
		a--;
	}
	_putchar('\n');
}

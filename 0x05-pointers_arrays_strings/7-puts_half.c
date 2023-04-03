#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints last half of the string
 * @str: the string to operate on
 */

void puts_half(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	/* counting characters in the string */
	while (*str != '\0')
	{
		n++;
		str++;
	}
	str = str - n;

	if (n % 2 == 0)
	{
		n = (n - 2) / 2;
	}
	else if (n % 2 != 0)
	{
		n = ((n - 1) / 2) - 1;
		str++;
	}
	while (*str != '\0' && i <= n)
	{
		str++;
		_putchar(*(str + n));
		i++;
	}
	_putchar('\n');
}

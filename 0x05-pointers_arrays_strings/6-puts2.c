#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every next but one character for index 0
 * @str: string to analyse
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		if ((i % 2) == 0)
		{
			_putchar(*str);
			i++;
		}
		else
		{
			i++;
		}
		str++;
	}
	_putchar('\n');
}

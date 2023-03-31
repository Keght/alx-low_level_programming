#include "main.h"

void print_string(int i, int j, int a, char *str);

/**
 * puts_half - print the second half of string
 * @str: string to operate on
 */

void puts_half(char *str)
{
	int a = 0;
	int i = 0;
	int j = 0;

	while (*str != '\0')
	{
		str++;
		a++;
	}

	while (*str != '\0')
	{
		if (a % 2 == 0)
		{
			j = (a / 2);
			print_string(i, j, a, str);
		}
		else
		{
			j = (a - 1) / 2;
			print_string(i, j, a, str);
		}
	}
}

/**
 * print_string - print string
 * @i: integer 1
 * @j: integer 2
 * @a: integer 3
 * @str: character string
 */

void print_string(int i, int j, int a, char *str)
{
	while (i < j)
	{
		str++;
		i++;
	}
	while ((i >= j) && (i < a))
	{
		_putchar(*str);
		str++;
		i++;
	}
}

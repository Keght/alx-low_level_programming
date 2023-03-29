#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit of num
 * @a: integer to operate on
 *
 * Return: last digit
 */
int print_last_digit(int a)
{
	_putchar(a % 10);
	return (a % 10);
}

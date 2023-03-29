#include <stdio.h>
#include "main.h"

/**
 * _abs - gets integer's absolute value
 * @a: integers to modify
 *
 * Return: integer value
 */
int _abs(int a)
{
	if (a > 0)
		a = a;
	else if (a == 0)
		a = 0;
	else if (a < 0)
		a = (1 - 2) * a;
	return (a);
}

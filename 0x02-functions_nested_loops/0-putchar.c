#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: Prints _putchar
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	char c[] = "_putchar\n";

	i = 0;
	while (i <= 9)
	{
		_putchar(c[i]);
		i++;
	}

	return (0);
}

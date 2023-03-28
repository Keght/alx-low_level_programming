#include <stdio.h>

/**
 * main - Entry point
 * @void: no parameter
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	char d;

	c = 'a';
	d = 'A';
	/**
	 * while - loop
	 * @c: changing values
	 *
	 * Return: Character (success)
	 */
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d = d + 1;
	}
	putchar('\n');
	return (0);
}

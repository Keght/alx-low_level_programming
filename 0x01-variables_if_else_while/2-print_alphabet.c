#include <stdio.h>

/**
 * main - Entry point
 * @void: Get's no paramater
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';
	/**
	 * while - loop
	 * @c: compares and increment
	 *
	 * Return: character (success)
	 */
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}

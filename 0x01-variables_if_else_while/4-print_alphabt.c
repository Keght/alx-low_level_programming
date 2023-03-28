#include <stdio.h>

/**
 * main - Entry point
 * @void: No parameter
 *
 * Return: 0 (success)
 */
int main(void)
{
	char a;

	a = 'a';
	/**
	 * while - loop
	 * @a: change value
	 *
	 * Return: character (success)
	 */
	while (a <= 'z')
	{
		if ((a == 'q') || (a == 'e'))
		{
			a = a + 1;
		} else
		{
			putchar(a);
			a = a + 1;
		}
	}
	putchar('\n');
	return (0);
}

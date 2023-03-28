#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * @void: no parameter
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("Last digit of %d is ", n);
	/**
	 * if - check value of n
	 * @n: compared to 5
	 *
	 * Return: String (success)
	 */
	if (m > 5)
		printf("%d and is greater than 5\n", m);
	else if (m == 0)
		printf("%d and is 0\n", m);
	else if ((m < 6) && (m != 0))
		printf("%d and is less than 6 and not 0\n", m);
	return (0);
}

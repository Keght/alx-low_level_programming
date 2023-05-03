#include <stdio.h>
#include <stdlib.h>

int main(void);

/**
 * main0 - Print words before the main execution.
 */
void __attribute__((constructor)) main0(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

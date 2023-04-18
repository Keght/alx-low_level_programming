#ifndef PUTCHAR_H
#define PUTCHAR_H
int _putchar(char c);
#endif

#ifndef _PUTCHAR_H
#define _PUTCHAR_H
#include <unistd.h>

int _putchar(char c);
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
#endif

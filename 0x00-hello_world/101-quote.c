# include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\"";
	char str1[] = "- Dora Korpar, 2015-10-19";
	char str2[] = "\n";

	fwrite(str, sizeof(char), sizeof(str), stderr);
	fwrite(str1, sizeof(char), sizeof(str1), stderr);
	fwrite(&str2, sizeof(char), sizeof(str2), stderr);

	return (0);
}

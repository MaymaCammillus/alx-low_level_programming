#include "main.h"

/**
 * print_rev - prints a stringin reverseve
 * @s: the string to be printed
 */

void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')

	for (i = n - 1; i >= 0; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

#include "main.h"
#include <string.h>
/**
 * print_rev - prints a stringin reverseve
 * @s: the string to be printed
 */

void print_rev(char *s)
{
	int i, x;

	x = 0;
	while (s[x] != '\0')
		x++;

	for (i = x - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');


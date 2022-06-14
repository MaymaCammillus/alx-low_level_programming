include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i, x;

	x = 0;
	while (c[x] != '\0')
		x++;

	for (i = x - 1 >= 0; i--)
	{
		_puchar(s[i]);
	}
	_putchar('\n');
}

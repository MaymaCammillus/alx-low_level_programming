include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: an input string
 * Return: 0
 */
void print_rev(char *s)
{
	int i, x;

	x = 0;
	while (s[x] != '\0')
		x++;

	for (i = x - 1; i >= 0; i--)
	{
		_puchar(s[i]);
	}
	_putchar('\n');
}

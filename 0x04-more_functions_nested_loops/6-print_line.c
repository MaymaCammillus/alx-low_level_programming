#include "main.h"
/**
 * print_line - prints line
 *
 * @n: the character to print a line
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}


#include "main.h"
/**
 * print_square - prints a line
 * @size: character argument
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

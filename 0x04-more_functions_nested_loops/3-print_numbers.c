#include "main.h"
/**
 * print_numbers - prints numbers
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
		_puchar(n + '0');
	_putchar('\n');
}

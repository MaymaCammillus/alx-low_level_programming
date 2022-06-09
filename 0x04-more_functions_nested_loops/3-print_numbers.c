#include "main.h"

/**
 * print_numbers - prints numbers
 */

void print_numbers(void)
{
	int k;

	for (k= 0; k < 10; k++)
		_puchar(k + '0');
	_putchar('\n');
}

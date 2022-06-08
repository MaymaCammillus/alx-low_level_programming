#include "main.h"
/**
 * print_last_digit - pirnts the last digit
 * @n : character to print
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}

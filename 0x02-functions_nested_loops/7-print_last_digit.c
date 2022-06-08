#include "main.h"
/**
 * print_last_digit - pirnts the last digit
 * @n : character to print
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int X;

	X = print_last_digit(INT_MIN);

	if (n < 0)
		n = -n;
	X = n % 10;
	_putchar(X + '0');
	return (X);

}

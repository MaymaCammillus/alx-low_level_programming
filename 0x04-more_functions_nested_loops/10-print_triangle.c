#include "main.h"
/**
 * print_square - prints a line
 * @size: character argument
 */

void print_square(int size)
{
int a, b, c;

if (size <= 0)
_putchar('\n');
else
{
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++
{
for (c = 0; c < size; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
}

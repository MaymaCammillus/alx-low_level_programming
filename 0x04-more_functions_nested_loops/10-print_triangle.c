#include "main.h"
/**
 * print_triangle- prints a line
 * @size: character argument
 */

void print_triangle(int size)
{
int a, b, c;

if (size <= 0)
_putchar('\n');
else
{
for (a = 0; a < size; a++)
{
for (b = size - 1; b--)
for (c = a + 1; c--)
{
_putchar('#');
}
_putchar('\n');
}
}
}


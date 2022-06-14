#include "main.h"

/**
 * puts_half - function to print second half of a string
 * @str: char array of string type
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)

	for (i /= 2; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

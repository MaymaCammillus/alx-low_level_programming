#include "main.h"
/**
 * string_toupper - converting any string to upper
 * @n: string
 * Return: string
 */

char *string_toupper(char *n)
{
int i = 0;

while (n[i])
{
if (n[i] >= 'a' && n[i] <= 'z')
n[i] = n[i] - 32;
n++;
}
return (n);
}

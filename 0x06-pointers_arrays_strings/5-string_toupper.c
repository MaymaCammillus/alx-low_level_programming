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
for (i = 0; n[i] != '\0'; i++)
{
if (n[i] >= 'a' && n[i] <= 'z')
n[i] = n[i] - 32;
}
return (n);
}

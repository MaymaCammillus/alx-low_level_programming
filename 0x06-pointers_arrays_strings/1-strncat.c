#include "main.h"
/**
 *_strncat - Adds strings
 *@dest: Parameter
 *@src: Parameter
 *@n: Prameter
 *Return: Dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = j = 0;

while (*(dest + i))
i++;

for (j = 0; j < n && (src + j) != '\0'; j++)
(dest + i) = (src + j);
if (j < n)
(dest + i) = (src + j);
return (dest);
}

#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: two concat strings
 */

char *_strcat(char *dest, char *src)
{
	int c1, c2;

	c1 = 0;
	while (dest[c1])
		c1++;

	for (c2 = 0; scr[c2] ; c2++)
	{
		dest[c1++] = scr[c2];
	}
	return (dest);
}

#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: para1
 * @src:  para2
 * Return: a strings
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;
	for (i = 0; scr[i] != 0; i++)
	{
		dest[len] = scr[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}

#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: Pointer to the destination array where the content is to be copied
 * @src: The string to copy from
 * @n: the character to print
 *Return: always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
		{
			dest[i] = src[i];
		}

	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}

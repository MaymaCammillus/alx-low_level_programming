#include "main.h"
#include <string.h>
/**
 * _strlen - function to get the length of a string
 *@s: the string pointer to be pass the function
 * Return: returns length of a string
 */

int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len(s));
}


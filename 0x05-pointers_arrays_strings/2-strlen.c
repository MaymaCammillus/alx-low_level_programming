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

	for (*s != '\n'; s++)
	{
		len += 1;
	}
	return (strlen(s));
}


#include "holberton.h"

/**
  * leet - Encodes a string into 1337
  * @s: The string to encode
  * Return: The encoded string
  */
char *leet(char *s)
{
	int i, j;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0' i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == r[j])
			{
				s[i] = n[j]
			}
		}
	}
	return (s);
}

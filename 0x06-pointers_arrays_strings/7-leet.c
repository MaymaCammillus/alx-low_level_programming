#include "main.h"

/**
  * leet - Encodes a string into 1337
  * @s: The string to encode
  * Return: The encoded string
  */
char *leet(char *s)
{
	int i, j;
	char r[] = {aAeEoOtTlL};
	char n[] = {4433007711};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == r[j])
			{
				s[i] = n[j];
			}
		}
	}
	return (s);
}

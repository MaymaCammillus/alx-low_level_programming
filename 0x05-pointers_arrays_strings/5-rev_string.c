#include "main.h"

/**
 * rev_string - function to reverse a string
 * @s: char array of string type
 */
void rev_string(char *s)
{
	int i, c, m;
	char x;

	for (i = 0; s[i] != '\0'; i++)
		;
	m = i;
	for (i--, c = 0; c < m / 2; i--, c++)
	{
		x = s[c];
		s[c] = s[i];
		s[i] = x;
	}
}

#include "main.h"
#include <stdlib.h>
/**
*_strdup - Copy a string and return pointer to new string
*@str: String to be copied
*Return: Null or Pointer to new string
*/
char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	s = (char *)malloc(i * sizeof(char) + 1);
	if (s == NULL)
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}

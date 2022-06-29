#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * argstostr - function that concatenates all the arguments
 * of your program.
 * @ac: int
 * @av: char
 * Return: char
 * y: count for the whole string
 * i: index for the first array of strings
 * j: index for the second array of strings
 * ia: index for inserting new line character
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int y, i, j, ia;

	if (ac == 0)
		return (NULL);
	for (y = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			y++;
		y++;
	}
	aout = malloc((y + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}
	for (i = j = ia = 0; ia < y; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			aout[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < y - 1)
			aout[ia] = av[i][j];
	}
	aout[ia] = '\0';
	return (aout);
}

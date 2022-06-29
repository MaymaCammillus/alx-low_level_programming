#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function that returns a pointer
 * to a 2D array of intergers.
 * @width: width int
 * @height: height int
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **a, i, j;

	a = malloc(sizeof(*a) * height);
	if (width <= 0 || height <= 0 || a == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(**a) * width);
		if (a[i] == 0)
		{
			while (i--)
			free(a[i]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}

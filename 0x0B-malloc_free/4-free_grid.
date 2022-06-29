#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - function that frees the grid
 * @grid: grid pointer of a pointer
 * @height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int n;
	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}

#include "main.h"
#include <stdio.h>
/**
 * main - prints the multiples of 5 and 3
 * Return: the sum
 */
int main(void)
{
	int j, n = 1024;
	int sum;

	for (j = 1; j < n; j++)
	{
		if ((j % 3) == 0 || (j % 5) == 0)
		{
			sum = sum + j;
		}
		else
		{
			sum = sum + 0;
		}
	}
	printf("%j\n", sum);
	return (0);
}

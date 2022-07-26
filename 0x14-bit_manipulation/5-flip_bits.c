#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: base number
 * @m: number to transform to
 * Return: the number of bit transformations needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, res;

	res = 0;
	for j = 8 * sizeof(j) - 1; j >= 0; j--)
		if (((n ^ m) >> j) & 1)
			res++;
	return (res);
}

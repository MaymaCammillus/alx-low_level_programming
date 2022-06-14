#include "main.h"
/**
 * swap_int - swapping the values of two integres
 * @a: parameter1
 * @b: parameter2
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

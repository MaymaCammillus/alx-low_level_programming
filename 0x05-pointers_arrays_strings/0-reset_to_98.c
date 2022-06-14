#include "main.h"
/**
 *reset_to_98 - to update the reference of a pointer
 *@n: pointer to be updated
 */

void reset_to_98(int *n)
{
	int x = 1;
	int *n = &x;
	*n = 98;
}

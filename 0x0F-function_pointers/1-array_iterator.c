#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - iterates an array
 * @array: is an array
 * @size: is the size
 * @action: is something
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

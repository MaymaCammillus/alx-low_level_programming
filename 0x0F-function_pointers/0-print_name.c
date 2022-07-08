#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints the name
 * @name: name to be printed
 * @f: function that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		(*f)(name);
}

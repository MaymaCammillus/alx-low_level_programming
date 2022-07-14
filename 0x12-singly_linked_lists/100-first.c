#include <stdio.h>

/**
 * y - prints from init by the loader before main
 */
void y(void) __attribute__ ((constructor));
void y(void)

{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

#include "main.h"
/**
 * more_numbers - prints more numbers
 */

void more_numbers(void)
{
	int a, i;

	a = 0;
	while (a < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
			i++;
		}
		a++;
		_putchar('\n');
	}
}
